#include "main.h"
/**
 * _strncpy - copies at most the inputed number from 
 * sting src to dest
 * @dest: buffer storing the string copy
 * @src: source string
 * @n: maximum number of bytes to be copied from src
 * return: a pointer to resulting string dest
*/

char *_strncpy(char *dest, char *src, int n)
{
int index = 0, src_len = 0;

while (src[index++])
src_len++;

for (index = 0; src[index] && index < n; index++)
dest[index] = src[index];

for (index = src_len; index < n; index++)
dest[index] = '\0';

return (dest);
}
