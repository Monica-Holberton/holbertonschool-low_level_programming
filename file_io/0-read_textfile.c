#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * open_file - Opens a file
 * @filename: Name of the file to open
 * Return: File descriptor on success, -1 on failure
 */
int open_file(const char *filename)
{
return (open(filename, O_RDONLY));
}

/**
* read_from_file - Reads content from a file
* @fd: File descriptor of the file to read from
* @buffer: Buffer to store the read content
* @letters: Number of letters to read
* Return: Number of bytes read, or -1 on failure
*/
ssize_t read_from_file(int fd, char *buffer, size_t letters)
{
return (read(fd, buffer, letters));
}

/**
* write_to_stdout - Writes content to the standard output
* @buffer: Buffer containing content to write
* @bytes: Number of bytes to write
* Return: Number of bytes written, or -1 on failure
*/
ssize_t write_to_stdout(char *buffer, ssize_t bytes)
{
return (write(STDOUT_FILENO, buffer, bytes));
}

/**
* read_textfile - Reads a text file and prints it to the POSIX standard output
* @filename: Name of the file to read
* @letters: Number of letters to read and print
* Return: Actual number of letters read and printed,
*         or 0 if function fails or write fails
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
ssize_t read_bytes, written_bytes;
char *buffer;

if (filename == NULL)
return (0);

fd = open_file(filename);
if (fd == -1)
return (0);

buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)
{
close(fd);
return (0);
}

read_bytes = read_from_file(fd, buffer, letters);
if (read_bytes == -1)
{
free(buffer);
close(fd);
return (0);
}

written_bytes = write_to_stdout(buffer, read_bytes);
if (written_bytes == -1 || written_bytes != read_bytes)
{
free(buffer);
close(fd);
return (0);
}

free(buffer);
close(fd);
return (written_bytes);
}
