#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - read text file and print it to standard output
 * @filename: variable pointer to be read
 * @letters: letters to be read and printed
 * Description: Write a function and prints it
 * to the POSIX standard output.
 * Return: the actual number of letters it could read and print, or 0 if there was an error
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t file, let, w;
char *text;

/*check file validity*/
text = malloc(letters);
if (text == NULL)
return (0);

if (filename == NULL)
return (0);

file = open(filename, O_RDONLY);

if (file == -1)
{
free(text);
return (0);
}

let = read(file, text, letters);

w = write(STDOUT_FILENO, text, let);

close(file);

/*return number of letters written to the standard output*/
return (w);
}
