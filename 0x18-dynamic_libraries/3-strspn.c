#include "main.h"

/**
 * _strspn - Locates the first occurance
 * of a character in a string.
 * @s: The string.
 * @accept: pointer to search prefix phrase
 * Return: number of bytes in initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
int index = 0;
int num = 0;
int value = 0;
int check = 0;

for (index = 0; s[index]; index++)
{
for (num = 0; accept[num]; num++)
{
check = 0;
if (s[index] == accept[num])
{
value++;
check = 1;
break;
}
}
if (check == 0)
{
break;
}
}
return (value);
}

