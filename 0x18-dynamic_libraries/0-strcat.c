#include "main.h"
/**
* *_strcat - concatenates 2 strings
* @dest: Target string
* @src: what to be added
* Return: returns the dest
*/

char *_strcat(char *dest, const char *src)
{
char *p = dest;

while (*p)
{
p++;
}

while (*src)
{
*p++ = *src++;
}

*p = '\0';

return dest;
}
