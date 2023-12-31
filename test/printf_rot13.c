#include "main.h"

/**
  * printf_rot13 - converts to cot13
  * @val: arguments
  * Return: counter
  */

int printf_rot13(va_list val)
{
	int i, j, counter = 0;
	int k = 0;
	char *s = va_arg(val, char*);
	char a[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNIPQRSTUVWXYZ"};
	char b[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNIPQRSTUVWXYZ"};

	if (s == NULL)
		s = "(null)";

	for (i = 0; s[i]; i++)
	{
		k = 0;
		for (j = 0; a[j] && !k; j++)
		{
			if (s[i] == a[j])
			{
				_putchar(b[j]);
				counter++;
				k = 1;
			}
		}
		if (!k)
		{
			_putchar(s[i]);
			counter++;
		}
	}
	return (counter);
}
