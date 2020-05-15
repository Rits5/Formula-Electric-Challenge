# Formula-Electric-Challenge
Code for formula electric application in firmware position 

### Table of Contents
* [Question 1](#Question-1)
* [Question 2](#Question-2)


### Question 1
Implement a function that inverts the value of the least and most significant bits (0 -> 1 or 1 -> 0) of the data value pointed to by a variable **b**

### Solution
1. Find out how where the most significant bit is present.
> The following code finds the position of the bit by dividing the value by 2 repeatedly until it reaches 0

```cpp
while (value_to_flip != 0) {
		value_to_flip = value_to_flip / 2;
		msb++;
}
```

2. Using the bit shift left operator, shift **1** left **msb** amount of times
```cpp
value_for_xor = 1 << msb;
```

3. Use the XOR operator to flip the least and most significant bits
```cpp
msb_value = value_to_flip ^ value_for_xor; 	//new value for the most significant bit
final_value = msb_value ^ 1;				// changes the least significant bit
```

[View the full code](../master/binary.c)

### Question 2
Implement a low-pass filter function with an exponentially weighted average. The latest sample is given 1/10 wighting and previous filtered value a weighting of 9/10. The function should initialize the value of the first sample value received if is the first time the function has run. Use this function prototype. **lowPassSamples_10hz(float sample)**



