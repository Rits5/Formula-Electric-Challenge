#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>

void flip_hi_lo(uint8_t *b) {

	int value_to_flip = &b;
	int msb = -1;			//most significant bit (msb)
	int value_for_xor;
	int msb_value;			//flipped value for msb
	//int lsb_value;		//flipped value for least significant bit (lsb)
	int final_value;	

	while (value_to_flip != 0) {
		value_to_flip = value_to_flip / 2;
		msb++;
	}

	value_to_flip = &b;
	value_for_xor = 1 << msb;					// bit shift left to only change the bit that is the most significant
	msb_value = value_to_flip ^ value_for_xor;  //new value for the most significant bit
	final_value = msb_value ^ 1;				// changes the least significant bit
	
	printf("final value %d", final_value);
}

int main(void) {

}

