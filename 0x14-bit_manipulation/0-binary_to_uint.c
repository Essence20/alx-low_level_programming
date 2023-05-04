/**
 * binary_to_uint - function that converts a binary number
 * to an unsigned integer.
 * @b: string containing the binary number.
 *
 * Return: the converted number, or 0 if an error occurs.
 */
unsigned int binary_to_uint(const char *b)
{
int i;
unsigned int decimal_value = 0;
if (!b)
return (0);
for (i = 0; b[i] != '\0'; i++)
{
if (b[i] != '0' && b[i] != '1')
return (0);
decimal_value = decimal_value * 2 + (b[i] - '0');
}
return (decimal_value);
}

