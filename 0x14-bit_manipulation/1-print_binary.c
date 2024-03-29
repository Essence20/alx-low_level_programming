#include <stdio.h>
/**
 * print_binary - prints the binary representation of a number
 * @n: the number to be printed in binary
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
int i, count = 0;
unsigned long int current;
for (i = 63; i >= 0; i--)
{
current = n >> i;
if (current & 1)
{
putchar('1');
count++;
}
else if (count)
{
putchar('0');
}
}
if (!count)
{
putchar('0');
}
}

