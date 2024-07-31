#include "main.h"
int printChar(va_list val)
{
        char str;
        
        str = va_arg(val, int);
        _putchar(str);
        return (1);
}