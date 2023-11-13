#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

#define UNUSED(x) (void)(x)
#define BUFF_SIZE 1024


int printf_str1(va_list val);
int _putchar(char c);
int _printf(const char *format, ...);
va_list list, char buffer[], int flags, int width, int precision, int size;

#endif
