#include "main.h"

/**
 * binary_to_uint - Convert a binary to an unsigned int.
 * @b:Pointer to a string of 0 and 1 chars.
 * Return: If b is NULL or contains chars not 0 or 1 - 0.
 * Otherwise - the converted number.
 */

unsigned int binary_to_uint(const char *b)
{
unsigned int res = 0;
int base = 1, i = 0;

/*check binary string if NULL*/
if (b == NULL)
return (0);

while (b[i + 1])
{
if (b[i] != '0' && b[i] != '1')
return (0);
i++;
}

while (i >= 0)
{
res += ((b[i] - '0') * base);
base *= 2;
i--;
}

/*return converted integer*/
return (res);
}
