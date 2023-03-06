#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: a matrix
 * @size: size of a
 * Return: void
 */

void print_diagsums(int *a, int size)
{
int i;
int sum_a = 0;
int sum_b = 0;

for (i = 0; i < size; i++)
{
	sum_a += a[i];
	sum_b += a[size - i - 1];
	a += size;
}
printf("%d, ", sum_a);
printf("%d\n", sum_b);
}
