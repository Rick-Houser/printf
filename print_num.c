#include "holberton.h"

/**
 * my_pow - Function that calculates a power.
 * @power: Given int used to calculate power.
 *
 * Return: the result of multiplying by powers of 10.
 */

int my_pow(int power)
{
	int i;
	int result;

	result = 1;

	for (i = 0; i < power; i++)
	{
		result *= 10;
	}
	return (result);
}

/**
 * int_min - function that produces output according to a format.
 *
 * Description: hard coded values for int_min
 */

void int_min(void)
{
	print_char('-');
	print_char('2');
	print_char('1');
	print_char('4');
	print_char('7');
	print_char('4');
	print_char('8');
	print_char('3');
	print_char('6');
	print_char('4');
	print_char('8');
}

/**
 * print_number - function that prints a given integer using ascii values.
 * @n: integer passed
 *
 * Return: Length of number.
 */

int print_number(int n)
	{
	int len, num, temp, length;

	len = 0;
	length = 0;

	if (n == -2147483648)
	{
		int_min();
	}
	if (n != -2147483648)
	{
		if (n < 0)
		{
			print_char('-');
			n = (n * -1);
			length++;
		}
		temp = n;

		while (temp > 9)
		{
			len++;
			temp /= 10;
		}
		length = len;

		while (len >= 0)
		{
			num = n / my_pow(len);
			n = n - (num * my_pow(len));
			print_char(num + 48);
			len--;
		}
	}
	return (length);
}
