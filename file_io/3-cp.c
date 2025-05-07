#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFFER_SIZE 1024

/**
* print_error - Prints an error message to stderr and exits.
* @code: Exit code.
* @message: Format string.
* @file: Filename to print in message.
*/
void print_error(int code, const char *message, const char *file)
{
dprintf(STDERR_FILENO, message, file);
exit(code);
}

/**
* main - Copies the content of one file to another.
* @argc: Number of arguments.
* @argv: Argument vector.
* Return: 0 on success, exits on failure.
*/
int main(int argc, char *argv[])
{
int fd_from, fd_to;
ssize_t r, w;
char buffer[BUFFER_SIZE];

if (argc != 3)
print_error(97, "Usage: cp file_from file_to\n", "");

fd_from = open(argv[1], O_RDONLY);
if (fd_from == -1)
print_error(98, "Error: Can't read from file %s\n", argv[1]);

fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
if (fd_to == -1)
{
close(fd_from);
print_error(99, "Error: Can't write to %s\n", argv[2]);
}

while ((r = read(fd_from, buffer, BUFFER_SIZE)) > 0)
{
w = write(fd_to, buffer, r);
if (w != r)
{
close(fd_from);
close(fd_to);
print_error(99, "Error: Can't write to %s\n", argv[2]);
}
}
if (r == -1)
{
close(fd_from);
close(fd_to);
print_error(98, "Error: Can't read from file %s\n", argv[1]);
}

if (close(fd_from) == -1)
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from), exit(100);

if (close(fd_to) == -1)
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to), exit(100);

return (0);
}

