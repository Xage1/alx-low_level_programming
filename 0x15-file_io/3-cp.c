#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

#define BUF_SIZE 1024

/**
 * error_exit - Prints an error message and exits with the specified code.
 * @msg: The error message to print.
 * @code: The exit code.
 */

void error_exit(const char *msg, int code)
{
dprintf(STDERR_FILENO, "%s\n", msg);
exit(code);
}

/**
 * main - Copies the content of a file to another file.
 * @argc: The argument count.
 * @argv: The argument vector.
 *
 * Return: Always 0.
 */

int main(int argc, char **argv)
{
int fd_from, fd_to, bytes_read, bytes_written;
char buffer[BUF_SIZE];

if (argc != 3)
error_exit("Usage: cp file_from file_to", 97);

fd_from = open(argv[1], O_RDONLY);
if (fd_from == -1)
error_exit("Error: Can't read from file", 98);

fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);
if (fd_to == -1)
error_exit("Error: Can't write to file", 99);

while ((bytes_read = read(fd_from, buffer, BUF_SIZE)) > 0)
{
bytes_written = write(fd_to, buffer, bytes_read);
if (bytes_written == -1 || bytes_written != bytes_read)
error_exit("Error: Can't write to file", 99);
}

if (bytes_read == -1)
error_exit("Error: Can't read from file", 98);

if (close(fd_from) == -1)
error_exit("Error: Can't close fd", 100);

if (close(fd_to) == -1)
error_exit("Error: Can't close fd", 100);

return (0);
}
