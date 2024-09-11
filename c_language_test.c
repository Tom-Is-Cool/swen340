// C language self test
// SWEN-563
// Larry Kiser Jan. 30, 2017

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "c_language_test.h"
#include "unit_tests.h"

// return a pointer to the character that is at the passed position.
// return a null if the requested position is past the end of the string.
char *get_pointer_at_position(char *pstring, int position)
{
    for (int i = 0; i <= position; i++) {
        if (pstring[i] == '\0') {
            return NULL;
        }
    }
    return &pstring[position];
}

// Convert array of integer x values into an array of y values using y = mx + b where m and b are constants
// passed to the function. The x values will be replaced by the y values (the x values are overwritten).
// The constants can be positive, negative or zero.
// Return the sum of the y values.
// Return 0 if the passed in px pointer is NULL.
int convert_and_sum( int *px, int m, int b, int number_of_x_values )
{
	if(px == NULL) {
		return 0;
	}
	int sum = 0;
	for(int i = 0; i < number_of_x_values; i++) {
		px[i] = m * px[i] + b;
		sum += px[i];
	}
	return 0 ;
}

// Determine if two pointers point to the same array of numbers
// return 1 if they do, return 0 otherwise.
// return 0 if either pointer is NULL.
int same_array( int *pfirst, int *psecond )
{
	if(pfirst == NULL || psecond == NULL) {
		return 0 ;
	}
	if(pfirst == psecond) {
		return 1;
	}
	return 0;
}

// The first time this is called return 1.
// The second time this is called return 0.
// Continue this pattern returning 1, then 0, then 1 and so on.
int bool_flip_flop()
{
    static int state = 1;
    int return_value = state;
    state = !state;
    return return_value;
}


// This function is implemented incorrectly. You need to correct it.
// When fixed it changes the last character in the passed string to 'Z'.
// It returns returns 1 on success.
// It returns 0 on if the passed string is NULL or an empty string.
int fix_bad_code( char *pstring )
{
	if (pstring == NULL || *pstring == '\0') {
		return 0 ;
	}
	while (*(pstring + 1) != '\0' ) {
		pstring++;
	}
	*pstring = 'Z' ;
	return 1 ;
}

// value contains a value from a hardware register that has many bit settings.
// bit_position is the value we want selected from value.
// bit_position 0 means get the lowest bit.
// bit_position 1 is the next higher bit, bit 2 is the next higher
// after bit 1 up to the bit n-1 where n is the number of bits in the integer.
// This function returns 0 if the selected bit is a 0
// It returns 1 if the selected bit is a 1
int get_bit_value( int value, int bit_position )
{
	return 0 ;
}
