#include <limits.h>
#include <stdio.h>
#include "holberton.h"

int main(void) {
		int len1a, len1b;
		int len4a, len4b;
		int len3a, len3b;
		int len2a, len2b;
		printf("=======\n");
		len1b = printf("%i\n");
		printf("=========\n");
		len1a = _printf("%i\n");
		printf("======\n");
		len2a = _printf("%i", 0);
		printf("\n");
		len2b = printf("%i", 0);
		printf("\n");
		_printf("%i", -123);
		printf("\n");
		printf("%i", -123);
		printf("\n");
		len3a = _printf("%i", -2147483648);
		printf("\n");
		len3b = printf("%i", -2147483648);
		printf("\n");
		len4a = _printf("%i", 2147483647);
		printf("\n");
		len4b = printf("%i", 2147483647);
		printf("\n");
		printf("Len1a[%d]\n", len1a);
		printf("Len1b[%d]\n", len1b);
		printf("Len2a[%d]\n", len2a);
		printf("Len2b[%d]\n", len2b);
		printf("Len3a[%d]\n", len3a);
		printf("Len3b[%d]\n", len3b);
		printf("Len4a[%d]\n", len4a);
		printf("Len4b[%d]\n", len4b);
	return 0;
}
