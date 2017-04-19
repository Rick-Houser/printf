#include "holberton.h"

/**
 * conv - formats character based on conversion specifiers.
 * @args: Pointer to list of variable length arguments.
 * @position: Character to read and format based on specifier.
 * @dircnt: To track number of directives called.
 *
 * Return: byes printed to stdout.
 */
int conv(va_list args, char position, int dircnt)
{
	int bytecnt;

	bytecnt = 0;
	switch (position)
	{
		case 'c':
			c_case(args);
			break;

		case 's':
			bytecnt = s_case(args, dircnt);
			break;

		case 'd':
			bytecnt = d_case(args);
			break;

		case 'i':
			bytecnt = i_case(args);
			break;

		case '%':
			_putchar('%');
			break;

		default:
			_putchar('%');
			bytecnt++;
			_putchar(position);
	}

	return (bytecnt);
}
