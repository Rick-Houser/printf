#include <stdlib.h>
#include "holberton.h"

/**
 * s_case - handle string conversion specifiers.
 * @args: Pointer to list of variable length arguments.
 * @dircnt: Tracks number of directives called.
 *
 * Return: Bytes writen to stdout.
 */
int s_case(va_list args, int dircnt)
{
	int bytecnt;
	char *str;

	bytecnt = 0;
	str = va_arg(args, char *);
	if (str == NULL)
	{
		bytecnt = print_str("(null)") - 1;
	}
	else
	{
		bytecnt = print_str(str);
		if (dircnt)
		{
			bytecnt -= 1;
		}
	}

	return (bytecnt);
}
