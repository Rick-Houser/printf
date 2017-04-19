#include <stdio.h>
#include "holberton.h"

/**
 * print_int - function to write numbers to stdout.
 * @n: Contains the number passed to write to stdout.
 *
 * Return: Bytes written.
 */
int print_int(int n)
{
	int len, ncpy, bytecnt, digit;

	bytecnt = 0;
	if (n < 0)
	{
		bytecnt += _putchar('-');
	}
	else
	{
		n = -n;
	}

	for (len = 1, ncpy = n; ncpy < -9; len *= 10)
	{
		ncpy /= 10;
	}

	for (ncpy = n; len != 0; len /= 10)
	{
		digit = (ncpy / len) * -1;
		bytecnt += _putchar(digit + '0');
		ncpy %= len;
	}

	return (bytecnt - 1);

}
