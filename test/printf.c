#include "holberton.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h> /* Gives structures needed to accept variable number of arguments */
#include <stdio.h> /* Gives 'vprintf' and related functions that accept the variable argument structures for printing. */
/**
 * _printf - Function produces output according to a format.
 * @format: A character string composed of 0 or more directives.
 *
 * Return: The number of characters printed (excluding null at end of string).
 */
char *convert(unsigned int num, int base);
char *found_int(va_list npoint);
int print_int(int c);
int _printf(const char *format, ...) /* Elipses (...) indicate it accepts variable number of arguments. [(...) promotes to ints] */
{
	int i;
	int arg;
	/*int ato;*/
	va_list args; /* pointer type assigned to 'args' list */
	va_start(args, format); /* va_start initializes args */
	i = 0;

	while (format[i] != '\0')
	{/*
		if (format[i] == '%' && format[i + 1] == 'c')
		{
			ato = va_arg(args, int);
			print_int(convert(ato));
			return (0);
		}*/
		arg = va_arg(args, int);
		print_char(arg);
		i++;
	}
	va_end(args); /* Signals end of arguments and invalidates 'args' */
	return (0);
}

/*
c       The int argument is converted to an unsigned char, and the
             resulting character is written.


s       The char * argument is expected to be a pointer to an array of
            character type (pointer to a string).  Characters from the array
            are written up to (but not including) a terminating NUL charac-
            ter; if a precision is specified, no more than the number speci-
            fied are written.  If a precision is given, no null character
            need be present; if the precision is not specified, or is greater
            than the size of the array, the array must contain a terminating
            NUL character.

%       A `%' is written.  No argument is converted.  The complete con-
             version specification is `%%'.
*/

int print_int(int c)
{
  return (write(1, &c, 1));
}

char *found_int(va_list npoint)
{
	int n;
	int i, res, temp, expo, count;
	char *string;

	n = va_arg(npoint, int);
	count = i = 0;
	expo = 1;
	n >= 0 ? (res = n * -1) : (res = n, count++);
	temp = res;
	while (temp <= -10)
	{
		expo *= 10;
		temp /= 10;
		count++;
	}
	string = malloc((count + 1) * sizeof(char));
	if (n < 0)
		string[i++] = '-';
	while (expo >= 1)
	{
		string[i++] = (((res / expo) % 10) * -1 + '0');
		expo /= 10;
	}
	return (string);
}


char *convert(unsigned int num, int base)
{
	static char Representation[]= "0123456789ABCDEF";
	static char buffer[50];
	char *ptr;

	ptr = &buffer[49];
	*ptr = '\0';

	do
	{
		*--ptr = Representation[num%base];
		num /= base;
	}while(num != 0);

	return(ptr);
}
