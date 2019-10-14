#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>

bool first_sample = true;	//acts as a flag
float prev_filter_val;		//global because need to store previous values over time. Could possibly make use of pointers instead

float lowPassSamples_10hz(float sample) {
	float filter_val;
	float new_filter_val;
	bool leave_loop = false;		//acts as a flag

	if (first_sample == true) {		//only for the initialization
		filter_val = sample;
		prev_filter_val = filter_val;
		first_sample = false;
		leave_loop = true;
	}

	else{
		new_filter_val = sample;
		filter_val = prev_filter_val * 0.9 + new_filter_val * 0.1;
		prev_filter_val = filter_val;
	}

	printf("filter_val: %f\n", filter_val);
}
