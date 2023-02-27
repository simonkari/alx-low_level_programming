#include "main.h"

/**
 * _strcpy - copy a string
 * @dest: destination value
 * @src: source value
 * return: the pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
int i;

for (i = 0; src[i] != '\n'; i++)
{
dest[i] = src[i];
}
dest[i++] = '\0';
return (dest);
}
