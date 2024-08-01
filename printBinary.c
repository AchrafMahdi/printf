#include "main.h"

/**
 * printBinary - Converts an unsigned int to binary and prints it.
 * @n: The unsigned integer to convert.
 *
 * Return: Number of characters printed.
 */
int printBinary(unsigned int n)
{
int i = 0;
int num = 0;
char binary[32];

if (n == 0)
{
_putchar('0');
return (1);
}

while (n > 0)
{
if (n % 2)
binary[i + 1] = '1';
else
binary[i + 1] = '0';

n = n / 2;
}

while (i-- > 0)
{
_putchar(binary[i]);
num++;
}

return (num);
}
