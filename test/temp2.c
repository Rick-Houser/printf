#include<stdio.h>
#include<stdarg.h>
#include "holberton.h"

int _printf(const char *,...); 				/*Our printf function*/
char* convert(unsigned int, int); 		/*Convert integer number into octal, hex, etc.*/
int _printf(const char *format,...)
{
	unsigned int i;
	char *s;
	int j,k;
	int integer;
	int count;
	/*Module 1: Initializing Myprintf's arguments*/
	va_list arg;
	va_start(arg, format);
	j = 0;
	count = 0;
	while (format[j] != '\0')
	{
		if (format[j] == '%') /* Directives found. */
		{
			j++;
			/*Module 2: Fetching and executing arguments*/
			switch(format[j])
			{
				case 'c' :
					i = va_arg(arg, int);		/*Fetch char argument*/
					print_char(i);
					break;

				case 's':
					s = va_arg(arg, char *); 		/*Fetch string*/
					for (k = 0; s[k]; k++)
					{
						print_char(s[k]);
					}
					break;

				case '%':
					if (format[j+1] == '%') /* Check for consecutive %. Only count it once */
					{
						count--;
					}
					print_char('%');
					break;

				case 'd' :
					integer = va_arg(arg, int); 		/*Fetch Decimal/Integer argument*/
					/*i = -i;
					putchar('-');*/
					if (integer < 0)
					{
						integer = -integer;
						print_char('-');
					}
					puts((convert(integer,10)));
					break;

				case 'i' :
					i = va_arg(arg,int); 		/*Fetch Decimal/Integer argument*/
					/*i = -i;
					putchar('-');*/
					puts(convert(i,10));
					break;
			}
		}
		else
		{
			print_char(format[j]); /* Print normally */
		}
	j++;
	count++;
	}
	/*Module 3: Closing argument list to necessary clean-up*/
	va_end(arg);
	return (count);
}

char *convert(unsigned int num, int base)
{
	static char Representation[]= "0123456789ABCDEF";
	static char buffer[50];
	char *ptr;

	ptr = &buffer[49];
	*ptr = '\0';

	do
	{
		*--ptr = Representation[num%base];
		num /= base;
	}while(num != 0);

	return(ptr);
}
