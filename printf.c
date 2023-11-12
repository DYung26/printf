#include "main.h"
int _printf(const char *format, ...)
{
	va_list arg;
	char i;
	int j = 0;

	va_start(arg, format);
	for (i = *format; i != '\0'; i = va_arg(arg, char))
	{
		j++;
	}
	return (j);
	va_end(arg);
}
