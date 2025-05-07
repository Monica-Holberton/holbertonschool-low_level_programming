#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>

#define BUFFER_SIZE 1024

/**
* print_error - Prints error message to stderr and exits.
* @exit_code: Exit code to use.
* @msg: Error message.
* @file: File name involved in the error.
*/
void print_error(int exit_code, const char *msg, const char *file)
{
dprintf(STDERR_FILENO, msg, file);
exit(exit_code);
}

/**
* copy_file - Copies the content of one file to another.
* @file_from: Source file name.
* @file_to: Destination file name.
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
close(fd_from);
print_error(99, "Error: Can't write to %s\n", file_to);
}

while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
{
bytes_written = write(fd_to, buffer, bytes_read);
if (bytes_written != bytes_read)
{
close(fd_from);
close(fd_to);
print_error(99, "Error: Can't write to %s\n", file_to);
}
}

if (bytes_read == -1)
print_error(98, "Error: Can't read from file %s\n", file_from);

if (close(fd_from) == -1)
print_error(100, "Error: Can't close fd %d\n", file_from);

if (close(fd_to) == -1)
print_error(100, "Error: Can't close fd %d\n", file_to);
}

/**
* main - Entry point.
* @argc: Argument count.
* @argv: Argument vector.
*
* Return: 0 on success, exits otherwise.
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
