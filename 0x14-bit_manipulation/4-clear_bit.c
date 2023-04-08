/**
 * clear_bit - sets the value of a given bit to 0
 * @n: a pointer to the number to modify
 * @index: the index of the bit to clear
 *
 * Return: 1 if successful, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > (sizeof(unsigned long int) * 8 - 1))
{
return (-1);
}
*n &= ~(1ul << index);
return (1);
}

