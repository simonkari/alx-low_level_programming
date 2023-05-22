#include "main.h"
/**
* *_strncpy - copies the src to dest
* @dest: the destination
* @src: the source to be copied
* @n: Amount of info to copy
* Return: Always dest
*/

char *_strncpy(char *dest, char *src, int n)
{
int  i;

i = 0;
while (i < n && src[i]!= '\0')
{
dest[i] = src[i];
i++;
}
while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest);
}
