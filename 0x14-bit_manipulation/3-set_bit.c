#include "main.h"

/**
 * set_bit - Entry Point
 * @n: input
 * @index: index of bit set to 1
 * Return: success 1, failure -1.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);

/*use bitwise OR operation*/
*n = *n | 1ul << index;
return (1);
}
