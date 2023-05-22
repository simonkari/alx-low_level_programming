#include "main.h"
/**
 * _strlen - returns length of string
 * @s: String
 * Return: always length
 */

int _strlen(const char *s)
{
int i = 0;

while (s[i]!= '\0')
i++;
return (i);
}
