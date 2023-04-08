/**
 * flip_bits - counts the number of bits to change from one number to another
 * @n: the first number
 * @m: the second number
 *
 * Return: the number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int xored = n ^ m;
unsigned int count = 0;
while (xored != 0)
{
count += xored & 1;
xored >>= 1;
}
return (count);
}

