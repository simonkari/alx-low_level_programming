#include "main.h"
#define _CRT_SECURE_NO_DEPRECATE

/**
 * _strcpy - copy a string
 * @dest: destination value
 * @src: source value
 * Description: return value of '_strcpy'
 * return: the pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
int i;

for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}
dest[i++] = '\0';
return (dest);
}
