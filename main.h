#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>

#define BUFFER_SIZE 1024

int _printf(const char *format, ...);
int _putchar(char c);
int _strlen(char *s);
int printString(va_list values);
int printChar(va_list val);
int printNumber(int n);
int printBinary(unsigned int n);

#endif