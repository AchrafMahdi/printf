#include <stdarg.h>
#include "main.h"

/**
 * _printf - function that produces output according to a format.
 * @format:  a character string.
 *
 * Return: number of characters printed.
 */
int _printf(const char *format, ...)
{
va_list args;
unsigned int i = 0;
int num = 0;
va_start(args, format);
while (format != '\0')
{
if (format[i] == '%')
{
i++;
switch (format[i])
{
case 'c':
_putchar(va_arg(args, int));
num++;
break;
case 's':
{
char *str = va_arg(args, char *);
while (*str)
{
_putchar(*str++);
num++;
}
}
break;
case '%':
_putchar('%');
num++;
break;
default:
_putchar('%');
_putchar(format[i]);
num += 2;
break;
}
}
else
        _putchar(format[i]), num++;
}
va_end(args), return (num);
}