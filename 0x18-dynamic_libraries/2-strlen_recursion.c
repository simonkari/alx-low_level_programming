#include "main.h"
/**
 * _strlen_recursion - counts length of string
 * @s: the string
 * Return: String length
 */
int _strlen_recursion(const char *s)
{
if (*s == '\0')
return (0);
return (1 + _strlen_recursion(s + 1));
}
