#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes a single character to the standard output stream
 *
 * @c: The character to print
 *
 * Return: On success, returns the number of characters written.
 *         On failure, returns -1 and sets errno appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}

