#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * append_text_to_file - that appends text
 * @filename: variable pointer
 * @text_content: content file
 * Description: function that appends text at the end of a file
 * Return: 1 success), -1 (failure)
 */

int append_text_to_file(const char *filename, char *text_content)
{
int i = 0, file;

/*check file name validity*/
if (filename == NULL)
return (-1);

if (text_content == NULL)
text_content = "";

/*get the length of text_content*/
while (text_content[i] != '\0')
{
i++;
}

file = open(filename, O_WRONLY | O_APPEND);

if (file == -1)
return (-1);

/*write text_content to file*/
write(file, text_content, i);

close(file);

/*return 1 to indicate success*/
return (1);
}
