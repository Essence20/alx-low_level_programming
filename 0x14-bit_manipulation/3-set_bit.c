/**
 * set_bit - sets value of bit at a given index to 1
 * @n: pointer to the number to modify
 * @index: index of bit to set to 1
 *
 * Return: 1 if successful, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int mask;
if (index >= sizeof(unsigned long int) * 8)
{
return (-1);
}
mask = 1UL << index;
*n |= mask;
return (1);
}

