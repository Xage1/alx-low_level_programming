#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"


/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: The name of the file.
 * @text_content: The text content to append to the file.
 *
 * Return: 1 on success, -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
int fd, bytes_written, i;

if (filename == NULL)
return (-1);

fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
return (-1);

if (text_content != NULL)
{
for (i = 0; text_content[i] != '\0'; i++)
continue;

bytes_written = write(fd, text_content, i);
if (bytes_written == -1 || bytes_written != i)
{
close(fd);
return (-1);
}
}

close(fd);

return (1);
}
