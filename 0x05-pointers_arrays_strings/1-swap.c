#include <stdio.h>

/**
 * swap_int - swaps the value of two integers.
 * @a: the fist integer to be swapped
 * @b: the second integer to be swapped
 * return: nothing
*/

void swap_int(int *a, int *b)
/* the function that swaps the value of two integers*/
{
int temp = *a;

*a = *b;
*b = temp;
}
