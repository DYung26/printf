#include "main.h"

/**
  * printf_pointer - prints pointer
  * @val: value
  * Return: int
  */

int printf_pointer(va_list val)
{
	void *p;
	long int a;
	char *s = "(nil)";
	int i, b;

	p - va_arg(val, void *);
	if (p == NULL)
	{
		for (i = 0; s[i] != '\0'; i++)
			_putchar(s[i]);
		return (i);
	}
	a = (unsigned long int)p;
	_putchar('0');
	_putchar('x');
	b = printf_hex_extra(a);
	return (b + 2);
}
