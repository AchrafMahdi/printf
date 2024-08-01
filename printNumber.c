#include "main.h"

/**
 * printNumber - print a number.
 * @n: The number.
 *
 * Return: number of digits printed.
 */
int printNumber(int n)
{
int num = 0;

if (n / 10)
num += printNumber(n / 10);

_putchar((n % 10) + '0');
num++;

return (num);
}