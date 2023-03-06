#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: pointer to Haystack
 * @accept: pointer to search dearch from
 * Return: pointer to the byte in s that matches one of
 * the bytes in accept, or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
int i;
int j = 0;
int check = 0;
char *p = NULL;

for (i = 0; s[i]; i++)
{
for (j = 0; accept[j]; j++)
{
check = 0;
if (s[i] == accept[j])
{
p = (s + i);
check = 1;
break;
}
}
if (check == 1)
{
break;
}
}
return (p);
}
