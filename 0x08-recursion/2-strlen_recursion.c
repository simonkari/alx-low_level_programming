#include "main.h"

/**
 * _strlen_recursion - calculate the length of a string
 * @s: the string to count
 * description: _strlen_recursion - Returns Length of String
 * return: integer value
 * On error, -1 is returned, and errno is set appropriately.
 * ecursively computes the length of a string.
 *
 * @param str a pointer to a string
 * @return the length of the string, or 0 if the string is empty
*/

int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
s++;
return (_strlen_recursion(s) + 1);
}
