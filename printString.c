#include "main.h"
/**
 * printString - print a string using _putchar.
 * @values: The string to print.
 *
 * Return: length of string.
 */
int printString(va_list values)
{
char *str;
int i, length;
str = va_arg(values, char *);
if (!str)
{
str = "(null)";
}
length = _strlen(str);
for (i = 0; i < length; i++)
{
_putchar(str[i]);
}
return (length);
}
