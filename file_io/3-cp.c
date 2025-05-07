#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>

#define BUFFER_SIZE 1024

/**
* print_error - Prints an error message to stderr and exits.
* @exit_code: The exit code to use.
* @msg: The error message format string.
* @file: The file name to include in the error message.
*/
void print_error(int exit_code, const char *msg, const char *file)
{
dprintf(STDERR_FILENO, msg, file);
exit(exit_code);
}

/**
* safe_close - Closes a file descriptor and handles errors.
* @fd: The file descriptor to close.
*/
void safe_close(int fd)
{
if (close(fd) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
exit(100);
}
}

/**
* copy_file - Copies the contents from one file to another.
* @file_from: The name of the source file.
* @file_to: The name of the destination file.
*
* Description: Opens the source file for reading and the destination file
* for writing (creates/truncates it), then reads and writes in a loop.
* Handles all error cases: open, read, write, and close.
*/
void copy_file(const char *file_from, const char *file_to)
{
int fd_from, fd_to;
ssize_t bytes_read, bytes_written;
char buffer[BUFFER_SIZE];

fd_from = open(file_from, O_RDONLY);
if (fd_from == -1)
print_error(98, "Error: Can't read from file %s\n", file_from);

fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (fd_to == -1)
{
safe_close(fd_from);
print_error(99, "Error: Can't write to %s\n", file_to);
}

while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) != 0)
{
if (bytes_read == -1)
{
safe_close(fd_from);
safe_close(fd_to);
print_error(98, "Error: Can't read from file %s\n", file_from);
}

bytes_written = write(fd_to, buffer, bytes_read);
if (bytes_written == -1 || bytes_written != bytes_read)
{
safe_close(fd_from);
safe_close(fd_to);
print_error(99, "Error: Can't write to %s\n", file_to);
}
}

safe_close(fd_from);
safe_close(fd_to);
}

/**
* main - Entry point for the cp program.
* @argc: Argument count.
* @argv: Argument vector.
*
* Return: 0 on success, exits with relevant code on failure.
*/
int main(int argc, char *argv[])
{
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}

copy_file(argv[1], argv[2]);

return (0);
}
