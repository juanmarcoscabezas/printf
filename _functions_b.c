#include "holberton.h"
#include <stdio.h>
/**
 * print_b - this function print binaries
 * @args: the arguments
 * Description: this function prints print binaries
 * Return: len of @args in binary.
 */
int print_b(va_list args)
{
	int len, i;
	unsigned int number;
	int result[32];

	number = va_arg(args, unsigned int);

	if (number == 0)
	{
		print_number(0);
		return (1);
	}
	for (len = 0; number > 0; len++)
	{
		result[len] = number % 2;
		number = number / 2;
	}

	for (i = len - 1; i >= 0; i--)
	{
		print_number(result[i]);
	}
	return (len);
}
