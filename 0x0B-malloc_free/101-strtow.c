#include <stdlib.h>
#include <stdio.h>

int word_len(char *str);
int count_words(char *str);
char **strtow(char *str);

/**
 * word_len - locate the index marketing the end of the
 * first word contained within a string
 * @str: the string to be searched
 * return: the index marketing the end of the initial
 * word pointed to by str
*/
int word_len(char *str)
{
int index = 0, len = 0;

while (*(str + index) && *(str + index) != ' ')
{
len++;
index++;
}
return (len);
}

/**
 * count_words - count the number of words contained within a string.
 * @str: the string to be searched
 * return: the number of words contained within str
*/
int count_words(char *str)
{
int index = 0, words = 0, len = 0;

for (index = 0; *(str + index); index++)
len++;

for (index = 0; index < len; index++)
{
if (*(str + index) != ' ')
{
words++;
index += word_len(str + index);
}
}
return (words);
}

/**
 * strtow - splits a string into words
 * @str: the string to be split
 * return: if str = NULL, str = "", or the function fails - NULL
 * otherwise - a pointer to an array of strings (words)
*/
char **strtow(char *str)
{
char **string;
int index = 0, words, w, letters, l;

if (str == NULL || str[0] == '\0')
return (NULL);

words = count_words(str);
if (words == 0)
return (NULL);

string = malloc(sizeof(char *) * (words + 1));
if (string == NULL)
return (NULL);

for (w = 0; w < words; w++)
{
while (str[index] == ' ')
index++;

letters = word_len(str + index);

string[w] = malloc(sizeof(char) * (letters + 1));

if (string[w] == NULL)
{
for (; w >= 0; w--)
free(string);

free(string);
return (NULL);
}
for (l = 0; l < letters; l++)
string[w][l] = str[index++];

string[w][l] = '\0';
}
string[w] = NULL;
return (string);
}
