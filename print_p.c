#include "holberton.h"

/**
 * print_p - Function that prints out a '%'.
 * @c: character to check.
 * @count: current char count.
 *
 * Return: count of chars.
 */
int print_p(char c, int count)
{
	if (c == '%')
	{
		count--;
	}
	count++;
	print_char('%');
	return (count);
}
