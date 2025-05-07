#include "main.h"

#define BUFFER_SIZE 1024

/**
* print_error_exit - Prints error message and exits with code
* @code: Exit code
* @format: Format string
* @arg: String argument for format
*/
void print_error_exit(int code, const char *format, const char *arg)
{
dprintf(STDERR_FILENO, format, arg);
exit(code);
}

/**
* close_fd - Closes a file descriptor and handles errors
* @fd: File descriptor to close
*/
void close_fd(int fd)
{
if (close(fd) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
exit(100);
}
}

/**
* main - Copies content of a file to another file
* @argc: Argument count
* @argv: Argument vector
* Return: 0 on success, exit with code on error
*/
int main(int argc, char *argv[])
{
int from_fd, to_fd, r_bytes, w_bytes;
char buffer[BUFFER_SIZE];

if (argc != 3)
print_error_exit(97, "Usage: cp file_from file_to\n", "");

from_fd = open(argv[1], O_RDONLY);
if (from_fd == -1)
print_error_exit(98, "Error: Can't read from file %s\n", argv[1]);

to_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
if (to_fd == -1)
{
close_fd(from_fd);
print_error_exit(99, "Error: Can't write to %s\n", argv[2]);
}

while ((r_bytes = read(from_fd, buffer, BUFFER_SIZE)) > 0)
{
w_bytes = write(to_fd, buffer, r_bytes);
if (w_bytes != r_bytes)
{
close_fd(from_fd);
close_fd(to_fd);
print_error_exit(99, "Error: Can't write to %s\n", argv[2]);
}
}
if (r_bytes == -1)
{
close_fd(from_fd);
close_fd(to_fd);
print_error_exit(98, "Error: Can't read from file %s\n", argv[1]);
}

close_fd(from_fd);
close_fd(to_fd);
return (0);
}
