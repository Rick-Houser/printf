#include "holberton.h"
/**
 * print_number - function that prints a given integer using ascii values.
 * @n: integer passed
 *
 * Return: Length of number.
 */

int print_number(int n)
{
	int temp, copy, length, num;

	length = 0;
	temp = 1;
	if (!n)
		print_char(0);

	if (n < 0)
	{
		length += print_char('-');
	}
	else
	{
		n = -n;
	}
	copy = n;

	while (copy < -9)
	{
		temp *= 10; /* powers of 10 - used for later division */
		copy /= 10;
	}

	while (temp > 0)
	{
		num = (n / temp) * -1; /* Divide => multiply (convert to neg/positive => assignment) */
		length += print_char(num + 48);
		n = n % temp; /* update with remainder */
		temp /= 10;
	}

	return (length);
}
