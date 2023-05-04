/**
 * get_bit - returns value of a bit at a given index in a number
 * @n: number to search
 * @index: index bit to retrieve
 *
 * Return: value of bit at the specified index, or -1 if error occurs
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int mask;
int bit;
if (index > (sizeof(unsigned long int) * 8 - 1))
{
return (-1);
}
mask = 1;
mask = mask << index;
bit = (n & mask) != 0;
return (bit);
}

