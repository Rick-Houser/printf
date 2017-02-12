#include "holberton.h"

/**
 * print_string - Function that prints out a string of chars.
 * @t: string to iterate.
 *
 */

void print_string(char *t)
{
	int k;

	for (k = 0; t[k]; t++)
	{
		print_char(t[k]);
	}
}
