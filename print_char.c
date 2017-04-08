#include <unistd.h>
/**
 * print_char - Function that prints out a given character.
 * @c: A character to be printed.
 *
 * Return: The number of characters written.
 */

int print_char(char c)
{
	return (write(1, &c, 1));
}
