#include "holberton.h"

/**
 * my_pow - Function that calculates a power.
 * @power: Given int used to calculate power.
 *
 * Return: the result of multiplying by powers of 10.
 */

int my_pow(int power)
{ /* Function to calculate exponents */
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
{ /* Function to handle int min */
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
 * Description: Takes an integer and prints each value using the ascii table.
 */

void print_number(int n)
	{ /* Func that outputs ascii chars */
	int len, num, temp;

	len = 0;

	if (n == -2147483648)
	{ /* Call int_min function */
		int_min();
	}
	if (n != -2147483648) /* Doesn't run for int_min */
	{
		if (n < 0) /* runs for small neg values */
		{
			print_char('-');
			n = (n * -1);
		}
		temp = n;

		while (temp > 9)
		{ /* Calculate length of numbers */
			len++;
			temp /= 10;
		} /* temp is 1, len is 3 [1337]*/

		while (len >= 0)
		{ /* Print each ascii char */
			num = n / my_pow(len);
/* 1. num = 1337 / 1000; num == 1 */
/* 2. num = 337 / 100; num == 3 */
			n = n - (num * my_pow(len)); /* n = 1337 - (1 * 1000); n = 337 */
			print_char(num + 48); /* Print ascii char for '1' */
			len--;
		}
	}
}
