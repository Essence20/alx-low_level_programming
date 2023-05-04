/**
 * clear_bit - sets the value of a given bit to 0
 * @n: pointer to the number to modify
 * @index: index of bit to clear
 *
 * Return: 1 if successful, or -1 if an error occurrs
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > (sizeof(unsigned long int) * 8 - 1))
{
return (-1);
}
unsigned long int mask = ~(1UL << index);
*n &= mask;
return (1);
}

