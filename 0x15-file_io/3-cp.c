#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * create_buffer - Allocates buffer of size 1024 bytes
 * @file: name of file
 *
 * Return: pointer to buffer
 */

char *create_buffer(char *file);
/**
 * close_file - Close file descriptor
 * @fd: file descriptor to close
 *
 * Return: void
 */

void close_file(int fd);
/**
 * create_buffer - Allocates buffer of size 1024 bytes
 * @file: name of file
 *
 * Return: pointer to buffer
 */

char *create_buffer(char *file)
{
char *buffer;
buffer = malloc(sizeof(char) * 1024);
if (buffer == NULL)
{
fprintf(stderr, "Error: Can't write to %s\n", file);
exit(EXIT_FAILURE);
}
return (buffer);
}
/**
 * close_file - Close file descriptor
 * @fd: file descriptor to close
 *
 * The function takes file descriptor as input and closes it.
 */
void close_file(int fd)
{
int c;
c = close(fd);
if (c == -1)
{
fprintf(stderr, "Error: Can't close fd %d\n", fd);
exit(EXIT_FAILURE);
}
}
/**
 * main - Copies contents of one file to another
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, 97-99 on error
 */

int main(int argc, char *argv[])
{
int from, to, r, w;
char *buffer;
if (argc != 3)
{
fprintf(stderr, "Usage: cp file_from file_to\n");
exit(EXIT_FAILURE);
}
buffer = create_buffer(argv[2]);
from = open(argv[1], O_RDONLY);
if (from == -1)
{
fprintf(stderr, "Error: Can't read from file %s\n", argv[1]);
free(buffer);
exit(EXIT_FAILURE);
}
r = read(from, buffer, 1024);
to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
if (to == -1)
{
fprintf(stderr, "Error: Can't write to %s\n", argv[2]);
free(buffer);
exit(EXIT_FAILURE);
}
do {
w = write(to, buffer, r);
if (w == -1 || w != r)
{
fprintf(stderr, "Error: Can't write to %s\n", argv[2]);
free(buffer);
exit(EXIT_FAILURE);
}
r = read(from, buffer, 1024);
}
while (r > 0);
free(buffer);
close_file(from);
close_file(to);
return (EXIT_SUCCESS);
}

