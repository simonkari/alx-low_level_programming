#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: the area being looked at
 * @b: the byte filling memory
 * @n: the amount of memory being filled
 * Return: the new memory
 */
char *_memset(char *s, char b, unsigned int n)
{
    unsigned char *p = s;
    unsigned char uc = b;

    while (n--)
    {
        *p++ = uc;
    }
    return s;
}
