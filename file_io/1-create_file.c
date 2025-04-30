#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * create_file - Creates a file and writes text content to it.
 * @filename: Name of the file to create.
* @text_content: NULL-terminated string to write to the file.
*
* Return: 1 on success, -1 on failure.
*/
int create_file(const char *filename, char *text_content)
{
int fd, write_status, len = 0;

/* Check if filename is NULL */
if (filename == NULL)
return (-1);

/* Open the file with create, write-only, truncate if it exists */
fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
if (fd == -1)
return (-1);

/* If there's content, write it to the file */
if (text_content != NULL)
{
while (text_content[len] != '\0')
len++;

write_status = write(fd, text_content, len);
if (write_status == -1)
{
close(fd);
return (-1);
}
}

/* Close the file descriptor */
close(fd);
return (1);
}
