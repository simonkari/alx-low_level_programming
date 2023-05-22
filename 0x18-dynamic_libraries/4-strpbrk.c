#include "main.h"
/**
 *  * _strpbrk - searches a string for any of a set of bytes
 * @s: the string
 * @accept: the bytes
 * Return: Where the bytes start to be found, or Null.
 */

char *_strpbrk(const char *s, const char *accept)
{
int i = 0;
int j = 0;

while (s[i]!= '\0')
{
for (j = 0; accept[j]!= '\0'; j++)
{
if (s[i] == accept[j])
return ((char *)&s[i]);
}
i++;
}
return (0);
}
