#include <unistd.h>

/**
 * Writes a single character to stdout
 *
 * @param c The character to write
 * @return The character written, or EOF on error
 */
int _putchar(int c)
{
char ch = (char)c;
return write(STDOUT_FILENO, &ch, 1);
}

