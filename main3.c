#include <limits.h>
#include <stdio.h>
#include "holberton.h"

/**
	* main - Entry point
	*
	* Return: Always 0
	*/
int main(void)
{

	int len, len1, len3, len4, leno, lenoo, lenn, lenc1, lenc2, len_p1, len_p2;
	int len2, lenmin, len0, lenmax, lenmi, li, stringlen1, stringlen2;
	/*
	* unsigned int ui;
	* void *addr;
	*/
	_printf("non spec _printf conditions\n\n");
	printf("non spec _printf conditions\n\n");
	_printf("test01(ptr string):String");
	printf("test02(ptr string):String");
	len1 = _printf("Let's try to printf a simple sentence.");
	len2 = printf("Let's try to printf a simple sentence.");
	_printf("_Len:[%d]\n", len1);
	printf("Len:[%d]\n", len2);
	len3 = _printf("Let's try a sentence with numb+!@[%]r5.\n");
	len4 = _printf("Let's try a sentence with numb+!@[%]r5.\n");
	_printf("_Len:[%d]\n", len3);
	printf("Len:[%d]\n", len4);
	/*ui = (unsigned int)INT_MAX + 1024;
	addr = (void *)0x7ffe637541f0;
	*/
	/*
	* _printf("Length:[%d, %i]\n", len, len);
	* printf("Length:[%d, %i]\n", len2, len2);
	*/
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);
	/*
	* _printf("Unsigned:[%u]\n", ui);
	* printf("Unsigned:[%u]\n", ui);
	* _printf("Unsigned octal:[%o]\n", ui);
	* printf("Unsigned octal:[%o]\n", ui);
	* _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	* printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	*/
	printf("==================================================\n\n");

	len_p1 = _printf("[%]");
	len_p2 = printf("[%]");
	_printf("Len_p1[%d]\n", len_p1);
	printf("Len_p2[%d]\n", len_p2);

	printf("\n");
	printf("==================================================\n");

	_printf(NULL);
	printf(NULL);
	_printf("Character:[%c]\n", 'h');
	printf("Character:[%c]\n", 'h');
	lenc1 = _printf("Chars:[%c]\n", 'H');
	lenc2 = printf("Chars:[%c]\n", 'H');
	_printf("Lenc1:[%d]\n", lenc1);
	printf("Lenc2:[%d]\n", lenc2);
	stringlen1 = _printf("[%s]\n", "I am a string !");
	stringlen2 = printf("[%s]\n", "I am a string !");
	_printf("StringLen1:[%d]\n", stringlen1);
	printf("StringLen2:[%d]\n", stringlen2);
	printf("\n");
	/*
	* _printf("Address:[%p]\n", addr);
	* printf("Address:[%p]\n", addr);
	*/
	lenn = _printf("Percent:[%%%%]\n");
	lenoo = printf("Percent:[%%%%]\n");
	lenmin = -2147483648;
	lenmi = -1337;
	len0 = 0;
	lenmax = 2147483647;
	li = 55;
	_printf("Len:[%d]\n", lenmin);
	printf("Len:[%d]\n", lenmin);
	_printf("Len:[%d]\n", len0);
	printf("Len:[%d]\n", len0);
	_printf("Len:[%d]\n", lenmi);
	printf("Len:[%d]\n", lenmi);
	_printf("Lenmax:[%d]\n", lenmax);
	printf("Lenmax:[%d]\n", lenmax);

	len = _printf("Percent:[%%]\n");
	leno = printf("Percent:[%%]\n");
	_printf("Len:[%d]\n", len); /* => 21, should be 12 */
	printf("Len:[%d]\n", len);
	_printf("Leno:[%d]\n", leno);
	printf("Leno:[%d]\n", leno);

	_printf("Lenn:[%d]\n", lenn);
	printf("Lenn:[%d]\n", lenn);

	_printf("Lenoo:[%d]\n", lenoo);
	printf("Lenoo:[%d]\n", lenoo);

	_printf("Length_null:[%d]\n", NULL);
	printf("Length_null:[%d]\n", NULL);

	_printf("Length_li:[%s]\n", li);
	printf("Length_li:[%s]\n", li);




	return (0);
}
