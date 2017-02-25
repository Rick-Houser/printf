#ifndef HOLBERTON
#define HOLBERTON
/* Function that produces output according to a format */
int _printf(const char *format, ...);
/* print_char - Function that prints out a given character */
int print_char(char c);
/* print_char - Function that prints out a string of characters */
void print_string(char *t);
/* print_p - Function that checks for consecutive '%' and returns count. */
int print_p(char c, int count);
/* get_directive - function that checks for directives. */
int get_directive(char token, int count, va_list arg);
#endif
