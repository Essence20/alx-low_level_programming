#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

/**
 * append_text_to_file - appends a string to the end of file
 * @filename: name of file to append to
 * @text_content: string to append
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fd, len, written;
if (filename == NULL)
return (-1);
fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
return (-1);
if (text_content != NULL)
{
len = strlen(text_content);
written = write(fd, text_content, len);
if (written == -1 || written != len)
{
close(fd);
return (-1);
}
}
close(fd);
return (1);
}

