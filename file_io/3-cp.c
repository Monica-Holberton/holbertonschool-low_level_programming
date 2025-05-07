#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUF_SIZE 1024

/**
* error_exit - Prints an error message and exits with a specific code
* @code: Exit code
* @msg: Message format string
* @arg: Argument to format into the message
*/
void error_exit(int code, const char *msg, const char *arg)
{
dprintf(STDERR_FILENO, msg, arg);
exit(code);
}

/**
* main - Copies content of file_from to file_to
* @argc: Argument count
* @argv: Argument vector
* 
* Return: 0 on success, exits on failure
*/
int main(int argc, char *argv[])
{
int fd_from, fd_to, rd, wr;
char buf[BUF_SIZE];

/* Argument check: we need exactly two arguments */
if (argc != 3)
error_exit(97, "Usage: cp file_from file_to\n", "");

/* Open the source file in read-only mode */
fd_from = open(argv[1], O_RDONLY);
if (fd_from == -1)
error_exit(98, "Error: Can't read from file %s\n", argv[1]);

/* Open the destination file in write-only mode, truncating it if it exists */
fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (fd_to == -1)
{
close(fd_from);
error_exit(99, "Error: Can't write to %s\n", argv[2]);
}

/* Copy contents from source to destination in 1,024-byte chunks */
while ((rd = read(fd_from, buf, BUF_SIZE)) > 0)
{
wr = write(fd_to, buf, rd);
if (wr != rd)
{
close(fd_from);
close(fd_to);
error_exit(99, "Error: Can't write to %s\n", argv[2]);
}
}

/* Check if read failed */
if (rd == -1)
{
close(fd_from);
close(fd_to);
error_exit(98, "Error: Can't read from file %s\n", argv[1]);
}

/* Close file descriptors */
if (close(fd_from) == -1)
error_exit(100, "Error: Can't close fd %d\n", argv[1]);
if (close(fd_to) == -1)
error_exit(100, "Error: Can't close fd %d\n", argv[2]);

return (0);
}
