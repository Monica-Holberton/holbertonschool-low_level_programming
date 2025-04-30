#include <fcntl.h>
#include <unistd.h>

/**
* append_text_to_file - Appends text at the end of a file.
* @filename: Name of the file.
* @text_content: NULL-terminated string to add to the end of the file.
*
* Return: 1 on success, -1 on failure.
*/
int append_text_to_file(const char *filename, char *text_content)
{
int fd, write_status, len = 0;

/* Check if filename is NULL */
if (filename == NULL)
return (-1);

/* Open file in append mode */
fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
return (-1);

/* If text_content is not NULL, write it */
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

/* Close the file */
close(fd);
return (1);
}

