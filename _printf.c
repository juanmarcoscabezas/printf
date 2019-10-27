#include "holberton.h"
/**
 * _printf - Printf function copy
 * Description: This is a modified version of printf
 * @s: String to print
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
	int how_many = 0;
	const char *pf;
	int (*f)();

	va_list args;

	va_start(args, format);

	for (pf = format; *pf; pf++)
	{
		if (*pf == '%')
		{
			f = verify_format(pf);
			if (f)
			{
				how_many += f(args);
				pf++;
			}
			else
			{
				_putchar(*pf);
				how_many++;
			}
		}
		else
		{
			_putchar(*pf);
			how_many++;
		}
	}
	va_end(args);
	return (0);
}
