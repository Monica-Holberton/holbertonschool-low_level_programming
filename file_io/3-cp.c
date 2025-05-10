#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
* read_textfile - Reads a text file and prints it
*                 to the POSIX standard output.
* @filename: Pointer to the name of the file to read.
* @letters: Number of letters to read and print.
*
* Return: Actual number of letters it could read and print,
*         or 0 if the file can't be opened/read, or if write fails.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
int file_d;
ssize_t read_flag, write_flag;
char *file_cp;

if (filename == NULL)
return (0);

file_d = open(filename, O_RDONLY);
if (file_d == -1)
return (0);

file_cp = malloc(sizeof(char) * letters);
if (file_cp == NULL)
{
close(file_d);
return (0);
}

read_flag = read(file_d, file_cp, letters);
if (read_flag == -1)
{
free(file_cp);
close(file_d);
return (0);
}

write_flag = write(STDOUT_FILENO, file_cp, read_flag);
free(file_cp);
close(file_d);

if (write_flag != read_flag)
return (0);

return (write_flag);
}
