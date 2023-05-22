#include "main.h"
/**
 * _memcpy - copy from the src to the dest
 * @dest: the dest
 * @src: the src
 * @n: Amount to be copied
 * Return: Altered dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
char *d = dest;
const char *s = src;

while (n--)
*d++ = *s++;
return (dest);
}
