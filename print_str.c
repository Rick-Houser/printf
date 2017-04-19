#include <unistd.h>
#include "holberton.h"

/**
 * print_str - writes a string to stdout.
 * @str: Contains to desired string to write to stdout.
 *
 * Return: length of string excluding null byte.
 */
int print_str(char *str)
{
	int i;
	int len;

	len = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
		len++;
	}
	return (len);
}
