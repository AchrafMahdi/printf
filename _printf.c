#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * _printf - function that produces output according to a format.
 * @format: a character string.
 *
 * Return: number of characters printed.
 */
int _printf(const char *format, ...)
{
va_list args;
unsigned int i = 0;
int num = 0;
if (format == NULL)
return (-1);

va_start(args, format);
while (format[i] != '\0')
{
if (format[i] == '%')
{
i++;
switch (format[i])
{
case 'c': _putchar(va_arg(args, int)); num++; break;
case 's': num += printString(args); break;
case '%': _putchar('%'); num++; break;
case 'd':
case 'i':
{
int n = va_arg(args, int);
if (n < 0) { _putchar('-'); n = -n; num++; }
num += printNumber(n);
break;
}
default: _putchar('%'); _putchar(format[i]); num += 2; break;
}
}
else
{
_putchar(format[i]);
num++;
}
i++;
}
va_end(args);
return (num);
}