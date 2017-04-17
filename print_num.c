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
	if (n > 0)
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
		temp *= 10;
		copy /= 10;
	}

	while (temp > 0)
	{
		num = (n / temp) * -1;
		length += print_char(num + 48);
		n = n % temp;
		temp /= 10;
	}

	return (length);
}
