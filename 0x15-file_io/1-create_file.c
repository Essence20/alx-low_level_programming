#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

/**
 * create_file - Creates new file with specified content
 * @filename: name of file to create
 * @text_content: content to write to file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
int fd;
ssize_t len, written;
if (filename == NULL)
return (-1);
fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
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

