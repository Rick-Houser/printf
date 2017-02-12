#include "holberton.h"

/**
 * print_char - Function that prints out a given character.
 * @c: A character to be printed.
 *
 * Return: The ...
 */

void print_string(char *t)
{
	int k;

	for (k = 0; t[k]; t++)
	{
		print_char(t[k]);
	}
}
