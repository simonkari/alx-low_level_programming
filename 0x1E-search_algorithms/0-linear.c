#include "search_algos.h"

/**
 * linear_search - Performs a linear search to find a value in an array.
 * @array: The array to search in.
 * @size: The length of the array.
 * @value: The value to search for.
 * Return: The index of the first occurrence of the value in the array,
 * or -1 if not found.
 */

int linear_search(int *array, size_t size, int value)
{
size_t i;

for (i = 0; (i < size) && (array); i++)
{
	if (*(array + i) == value)
	{
		printf("Value checked array[%d] = [%d]\n", (int)i, *(array + i));
		return (i);
	}
	else
	{
		printf("Value checked array[%d] = [%d]\n", (int)i, *(array + i));
	}
}
return (-1);
}
