#include "main.h"
/**
 * _strchr - locates character in string
 * @s: String
 * @c: Character
 * Return: NULL if not found, otherwise s after the character is located
 */

char *_strchr(char *s, char c)
{
while (*s)
{
if (*s == c)
return s;
s++;
}
    
return (*s == c) ? s : 0;
}
