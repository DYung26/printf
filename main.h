#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

typedef struct format
{
	char *id;
	int (*f)();
}match;

int printf_rot13(va_list val);
int printf_reverse_string(va_list val);
int printf_pointer(va_list val);
int printf_hex_extra(unsigned long int num);
int printf_string(va_list val);
int printf_HEX_extra(unsigned int num);
int printf_HEX(va_list val);
int printf_hex(va_list val);
int printf_oct(va_list val);
int printf_unsigned(va_list args);
int printf_binary(va_list val);
int printf_int(va_list args);
int printf_dec(va_list args);
int printf_37(void);
int _strlen(const char *str);
int printf_s(va_list val);
int printf_char(va_list val);
int _putchar(char c);
int _printf(const char *format, ...);

#endif
