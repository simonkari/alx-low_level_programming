#include "main.h"

/**
 * reverse_array - reverses the content of array of integers
 * @a: array of integers to reverse
 * @n: numbers of elements in an array
*/

void reverse_array(int *a, int n)
{
int tmp, index;

for (index = n - 1; index >= n / 2; index--)
{
tmp = a[n - 1 - index];
a[n - 1 - index] = tmp;
}
}
