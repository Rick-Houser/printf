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
/* print_number - Function uses ascii to print each digit of int n */
void print_number(int n);
/* int_min - Helper function that handles minimum int value */
void int_min(void);
/* my_pow - Helper function that calculates a given power */
int my_pow(int power);

#endif
