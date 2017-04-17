#include "holberton.h"
#include <unistd.h> /* May not need this */
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * _printf - function that produces output according to a format.
 * @format: character string composed of 0 or more directives.
 *
 * Return: the number of characters printed(excluding null at end of strings).
 */
 int _printf(const char *format, ...)
 {
	 unsigned int i;
	 char *p;

	 va_list ap;
	 if ((p = malloc(128)) == NULL)
	 	return (-1);
	va_start(ap, format);

	(void) vsnprintf(p, 128, format, ap);
	va_end(ap);
	return (i);
 }
