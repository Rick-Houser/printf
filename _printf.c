#include <stdarg.h>
#include "holberton.h"

/**
 * _printf - function that produces output according to a format.
 * @format: character string composed of 0 or more directives.
 *
 * Return: the number of characters printed(excluding null at end of strings).
 */

int _printf(const char *format, ...)
{
	int i, c, count;
	char *s;
	va_list arg;

	va_start(arg, format);
	count = 0;

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case 'd':
					c = va_arg(arg, int);
					print_number(c);
					break;

				case 'c':
					c = va_arg(arg, int);
					print_char(c);
					count++;
					break;

				case 's':
					s = va_arg(arg, char *);
					print_string(s);
					count++;
					break;

				case '%':
					print_char(format[i]);
					count++;
					break;
			}
		}
		else
		{
			print_char(format[i]);
			count++;
		}
	}
	va_end(arg);
	return (count);
}
