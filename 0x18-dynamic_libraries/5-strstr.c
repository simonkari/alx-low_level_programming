#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: the main string
 * @needle: the substring
 * Return: where the substring is in the main string or 0
 */
char *_strstr(char *haystack, char *needle)
{
int i = 0, j = 0;

while (haystack[i]!= '\0')
{
if (haystack[i] == needle[j])
{
j++;
if (needle[j] == '\0')
return (haystack + i);
}
else
j = 0;
i++;
}
return (0);
}
