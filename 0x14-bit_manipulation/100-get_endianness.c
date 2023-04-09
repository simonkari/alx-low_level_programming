#include "main.h"

/**
 * get_endianness - return the endianness of the machine
 * Return: 0 if the machine is big endian, 1 for little endian
 */

int get_endianness(void)
{
int num = 1;
char *endian = (char *)&num;

if (*endian == 1)
return (1);

return (0);
}
