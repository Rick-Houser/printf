#include<stdarg.h>
#include "holberton.h"

/**
 * get_flag - function that checks for printf flags.
 * @token: Character to check.
 * @count: Count of directives.
 * @arg: Argument list.
 *
 * Return: The number of bytes printed(excluding null at end of strings).
 */

int get_flag(char token, int count, va_list arg)
{
	int c;
	char *s;

	switch (token)
	{
		case 'd':
			c = va_arg(arg, int);
			count += print_number(c);
			break;

		case 'c':
			c = va_arg(arg, int);
			count += print_char(c);
			break;

		case 's':
			s = va_arg(arg, char *);
			count += print_string(s);
			break;

		case '%':
			count += print_char(token);
			break;
	}
	return (count);
}

/**
 * _printf - function that produces output according to a format.
 * @format: character string composed of 0 or more directives.
 *
 * Return: the number of characters printed(excluding null at end of strings).
 */

int _printf(const char *format, ...)
{
	int i, count;
	va_list arg;

	va_start(arg, format);
	count = 0;

	if (!format)
		return (-1);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%' || !format[i + 2])
		{
			print_char(format[i]);
			count++;
		}
		else
		{
			i++;
			count = get_flag(format[i], count, arg);
		}
	}
	va_end(arg);
	return (count);
}
