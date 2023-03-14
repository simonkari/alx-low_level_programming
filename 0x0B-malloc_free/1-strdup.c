#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicates a string and returns a pointer to the new string.
 * _strdup - duplicate a string
 * @str: the string to duplicate
 * return: Return: On success, a pointer to the newly allocated string. NULL otherwise.
*/
char *_strdup(char *str)
{
 // Function body


int a = 0, i = 1;
char *s;

if (str == NULL)
return (NULL);

while (str[i])
{
i++;
}
s = malloc((sizeof(char) * i) +1);

if (s == NULL)
return (NULL);

while (a < i)
{
s[a] = str[a];
a++;
}
s[a] = '\0';
return (s);
}
