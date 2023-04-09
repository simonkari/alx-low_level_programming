#include "main.h"

/**
 * clear_bit - set value of bit
 * @n: input
 * @index: index of the bit to set to 0
 * Return: success 1, failure -1.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);

/*use a bitwise AND operation*/
*n = *n & ~(1ul << index);
return (1);
}
