#include "holberton.h"

/**
 * print_string - Function that prints out a string of chars.
 * @str: string to iterate.
 *
 * Return: the string length.
 */

int print_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		print_char(str[i]);
	}
	return (i);
}
