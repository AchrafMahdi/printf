#include "main.h"

/**
 * printChar - print a char using _putchar.
 * @val: The character to putchar.
 *
 * Return: 1 on success.
 */
int printChar(va_list val)
{
char str;

str = va_arg(val, int);
_putchar(str);
return (1);
}
