#include "main.h"

/**
 * flip_bits - calculate the number of bits to flip
 * @n: input
 * @m: bits
 * Return: number of bits to be flipped.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int count = 0;

/*use while loop to navigate over each bit*/
while (n != 0 || m != 0)
{
if ((n & 1) != (m & 1))
count++;
m = m >> 1;
n = n >> 1;
}

return (count);

}
