#include "main.h"

/**
  * _printf - mimics printf
  * @format: identifier to look for
  * Return: integer
  */

int _printf(const char *format, ...)
{
	match m[] = {
		{"%c", printf_char}, {"%s", printf_s}, {"%%", printf_37}, {"%d", printf_dec}, {"%i", printf_int}, {"%r", printf_reverse_string}, {"%R", printf_rot13}, {"%b", printf_binary}, {"%u", printf_unsigned}, {"%o", printf_oct}, {"%x", printf_hex}, {"%X", printf_ HEX}, {"%S", printf_string}, {"%p", printf_pointer}
	};
	va_list args;
	int  i = 0, len = 0;
	int j;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

Here:
	while (format[i] != '\0')
	{
		j = 13;
		while (j >= 0)
		{
			if (m[j].id[0] == format[i] && m[j].id[1] == format[i + 1])
			{
				len = len + m[j].f(args);
				i = i + 2;
				goto Here;
			}
			j--;
		}
		_putchar(format[i]);
		i++;
		len++;
	}
	va_end(args);
	return (len);
}
