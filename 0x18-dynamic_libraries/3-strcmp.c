#include "main.h"
/**
 * _strcmp - compare pointers
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 * return: if str1 < str2, the negative difference of the first unmatched characters
*/

int _strcmp(char *s1, char *s2)
{
while (*s1 && *s2 && *s1 == *s2)
{
s1++;
s2++;
}
return (*s1 - *s2);
}
