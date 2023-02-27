#include "main.h"

/**
 * _puts - prints a string
 * @str: the string to print
 * return: void
*/

void _puts(char *str)
{
for (; *str != '\n'; str++)
{
    _putchar(*str);
}
_putchar('\n');
}
