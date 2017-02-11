#include<stdio.h>
#include<stdarg.h>
#include "holberton.h"

int _printf(const char *format,...)
{
	int i;
	int c;
	int count;
	char *s;
	int k;

	va_list arg;
	va_start(arg, format);
	i = 0;
	count = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			switch(format[i])
			{
				case 'c' :
					c = va_arg(arg, int);
					print_char(c);
					break;

				case 's':
					s = va_arg(arg, char *);
					for (k = 0; s[k]; k++)
					{
						print_char(s[k]);
					}
					break;

				case '%':
					if (format[i+1] == '%')
					{
						count--;
					}
					print_char('%');
					break;
			}
		}
		else
		{
			print_char(format[i]);
		}
	i++;
	count++;
	}
	va_end(arg);
	return (count);
}
