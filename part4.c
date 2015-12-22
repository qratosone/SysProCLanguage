#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * Returns a newly allocated string on the heap with the value of "Hello".
 * This should not be freed.
 *
 * @returns
 *     A newly allocated string, stored on the heap, with the value "Hello".
 */
char * sixteen()
{
	char *s = (char*)malloc(sizeof(char)*7);
	strcpy(s, "Hello");
	return s;
}


/**
 * Prints out the radius of a circle, given its diameter.
 *
 * @param d
 *     The diameter of the circle.
 */
void seventeen(const int d)
{
	printf("The radius of the circle is: %f.\n", (float)d/2);
}


/**
 * Manipulates the input parameter (k) and prints the result.
 *
 * @param k
 *     The input parameter to manipulate.
 */
void eighteen(const int k)
{
	int _k = k * k;
	_k += _k;
	_k *= _k;
	_k -= 1;

	printf("Result: %d\n", _k);
}


/**
 * @brief
 *     Clears the bits in "value" that are set in "flag".
 *
 * This function will apply the following rules to the number stored
 * in the input parameter "value":
 * (1): If a specific bit is set in BOTH "value" and "flag", that
 *      bit is NOT SET in the result.
 * (2): If a specific bit is set ONLY in "value", that bit IS SET
 *      in the result.
 * (3): All other bits are NOT SET in the result.
 *
 * Examples:
 *    clear_bits(value = 0xFF, flag = 0x55): 0xAA
 *    clear_bits(value = 0x00, flag = 0xF0): 0x00
 *    clear_bits(value = 0xAB, flag = 0x00): 0xAB
 *
 * @param value
 *     The numeric value to manipulate.
 *
 * @param flag
 *     The flag (or mask) used in order to clear bits from "value".
 */
long int clear_bits(long int value, long int flag)
{
	unsigned long long result=0;
	unsigned long long i=0,j=1;
	for(;i<64;i++,j<<=1){
		if((value&j)&&!(flag&j)){
			result|=j;
		}
	}
	return result;
	
}

