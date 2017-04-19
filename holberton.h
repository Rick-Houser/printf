#ifndef HOLBERTON
#define HOLBERTON
#include <stdarg.h>

/* _putchar - function that writes characters to stdout. */
int _putchar(char c);

/* print_str - writes a string to stdout. */
int print_str(char *str);

/* print_int - function that prints numbers to stdout. */
int print_int(int n);

/* conv - passes to case function based on conversion specifiers. */
int conv(va_list args, char position, int dircnt);

/* c_case - handle character conversion specifiers. */
void c_case(va_list args);

/* s_case - handle string conversion specifiers. */
int s_case(va_list args, int dircnt);

/* d_case - handle integer conversion specifiers */
int d_case(va_list args);

/* i_case - handle integer conversion specifiers. */
int i_case(va_list args);

/* _printf - function that produces output according to a format. */
int _printf(const char *format, ...);

#endif /* HOLBERTON */
