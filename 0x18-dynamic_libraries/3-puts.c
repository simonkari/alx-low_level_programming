#include "main.h"
/**
* _putchar - prints a character
* @c: the character being printed
*/

void _puts(char *str)
{
int i = 0;

 while (str[i]!= '\0')
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}

