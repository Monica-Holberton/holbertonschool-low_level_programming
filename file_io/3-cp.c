#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

#define BUFFER_SIZE 1024

/**
* print_error - Prints an error message to stderr and exits.
* @exit_code: Exit status code.
* @message: The error message format string.
* @arg: Argument to include in the message.
*/
void print_error(int exit_code, const char *message, const char *arg)
{
dprintf(STDERR_FILENO, message, arg);
exit(exit_code);
}

/**
* open_files - Opens source and destination files.
* @file_from: Name of the source file.
* @file_to: Name of the destination file.
* @fd_from: Pointer to source file descriptor.
* @fd_to: Pointer to destination file descriptor.
*/
void open_files(const char *file_from, const char *file_to,
int *fd_from, int *fd_to)
{
*fd_from = open(file_from, O_RDONLY);
if (*fd_from == -1)
print_error(98, "Error: Can't read from file %s\n", file_from);

*fd_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
if (*fd_to == -1)
{
close(*fd_from);
print_error(99, "Error: Can't write to %s\n", file_to);
}
}

/**
* copy_content - Copies content from one file descriptor to another.
* @fd_from: Source file descriptor.
* @fd_to: Destination file descriptor.
* @file_from: Name of the source file.
* @file_to: Name of the destination file.
*/
void copy_content(int fd_from, int fd_to, const char *file_from,
const char *file_to)
{
ssize_t rd, wr;
char buffer[BUFFER_SIZE];

while ((rd = read(fd_from, buffer, BUFFER_SIZE)) > 0)
{
wr = write(fd_to, buffer, rd);
if (wr != rd)
{
close(fd_from);
close(fd_to);
print_error(99, "Error: Can't write to %s\n", file_to);
}
}

/* Check if read returned -1 (indicating an error) */
if (rd == -1)
{
close(fd_from);
close(fd_to);
print_error(98, "Error: Can't read from file %s\n", file_from);
}
}

/**
* close_files - Closes two file descriptors with error handling.
* @fd_from: Source file descriptor.
* @fd_to: Destination file descriptor.
*/
void close_files(int fd_from, int fd_to)
{
if (close(fd_from) == -1)
print_error(100, "Error: Can't close fd %d\n", "fd_from");

if (close(fd_to) == -1)
print_error(100, "Error: Can't close fd %d\n", "fd_to");
}

/**
* main - Entry point. Copies the content of a file to another file.
* @argc: Number of command-line arguments.
* @argv: Array of arguments.
*
* Return: 0 on success.
*/
int main(int argc, char *argv[])
{
int fd_from, fd_to;

if (argc != 3)
print_error(97, "Usage: %s file_from file_to\n", argv[0]);

open_files(argv[1], argv[2], &fd_from, &fd_to);
copy_content(fd_from, fd_to, argv[1], argv[2]);
close_files(fd_from, fd_to);

return (0);
}
