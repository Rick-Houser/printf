#include "holberton.h"
#include "stdlib.h"
#include "stdio.h"

int get_length (int value);
/**
 * my_pow - Function that calculates a power.
 * @n: Given int used to calculate power.
 *
 * Return: the result of multiplying by powers of 10.
 */

int my_pow(int n)
{
	int i;
	int result;

	result = 1;

	for (i = 1; i < n; i++)
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

int int_min(void)
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
	return(11);
}

/**
 * print_number - function that prints a given integer using ascii values.
 * @n: integer passed
 *
 * Return: Length of number.
 */

int print_number(int n)
	{
	int length;
	length = 0;
	/*
	if (n == -2147483648)
	{
		length = int_min();
	}
	*/
	if (n < 0)
	{
		print_char('-');
		printf("N == %i\n", n);
		n = -n;
		length++;
	}
	printf("N == %i\n", n);
	length += get_length(n - 1);
	return (length);
}


int get_length(int value)
{
	int i;
	int temp;
	int copy;
	int num;
	int flag;
	num = 0;
	i = 0; /* */
	if (value < 0)
		flag = 1;
	copy = value;
	while (copy > 0)
	{
		i++;
		copy /= 10;
	}
	temp = i;
	/*
	print_char(copy + 48);
	i = printf("%i\n", temp);
	printf("length of i %i\n", i);
	printf("\n");
	*/
	printf("=== Here v ===\n");
	while (temp > 0)
	{
		/*
		printf("Value: %d\n", value);
		printf("Temp: %d\n", temp);
		printf("My Pow: %d\n", my_pow(temp));
		*/
		printf("Num == %i\n", num);
		num = value / my_pow(temp);
		printf("Num == %i\n", num);
		value = (value - (num * my_pow(temp)));
		printf("Value == %i\n", value);
		if (flag > 0)
		{
			print_char('-');
			flag = 0;
		}
		print_char(num + 48);
		temp--;
	}
	printf("\n");
	printf("=== And Here ^ ===\n");
	return i;
}
