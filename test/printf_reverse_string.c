#include "main.h"

/**
  * printf_reverse_string - prints a string in reverse
  * @val: argument
  * Return: the string
  */

int printf_reverse_string(va_list val)
{
	char *s = va_arg(val, char *);
	int i;
	int j = 0;

	if (s == NULL)
		s = "(null)";
	while (s[j] != '\0')
		j++;
	for (i = j - 1; i >= 0; i--)
		_putchar(s[i]);
	return (j);
}
