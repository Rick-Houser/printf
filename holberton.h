#ifndef HOLBERTON
#define HOLBERTON
/* Function that produces output according to a format */
int _printf(const char *format, ...);
/* print_char - Function that prints out a given character */
int print_char(char c);
/* print_char - Function that prints out a string of chars and return count */
int print_string(char *str);
/* print_p - Function that checks for consecutive '%' and returns count. */
int print_p(char c, int count);
/* print_number - Function uses ascii to print each digit of int n */
int print_number(int n);

#endif
