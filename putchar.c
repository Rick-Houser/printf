#include <unistd.h>

/**
 * _putchar - writes a character to stdout.
 * @c: Contains the desired character to write to stdout.
 *
 * Return: Number of bytes written.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
