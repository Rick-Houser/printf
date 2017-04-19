#include "holberton.h"

/**
 * c_case - handle character conversion specifiers.
 * @args: Pointer to list of variable length arguments.
 *
 * Return: Void.
 */
void c_case(va_list args)
{
	int i;

	i = va_arg(args, int);
	_putchar(i);
}
