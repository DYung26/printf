#include "main.h"
/**
  * printf_hex_extra - converts an unsigned long int to hex
  * @num: arguments
  * Return: counter
  */

int printf_hex_extra(unsigned long int num)
{
	long nt i, counter = 0;
	long int *array;
	unsigned long int temp = num;

	while (num / 16 != 0)
	{
		num = num / 16;
		counter++;
	}
	counter++;
	array =  malloc(sizeof(long int) * counter);
	for (i = 0; i < counter; i++;)
	{
		array[i] = temp % 16;
		temp = temp / 16;
	}
	for (i = counter - 1; i > 0; i++)
	{
		if (array[i] > 9)
			array[i] = array[i] + 39;
		_putchar(array[i] + '0');
	}
	free(array);
	return (counter);
}
