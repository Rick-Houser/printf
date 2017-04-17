#include <limits.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - test suite for _printf
 * run commands in bash
 *  $ gcc *c -o a.out; ./a.out > a
 *  $ gcc -DDEFINE'printf =_printf' *c -o b.out; ./b.out > b
 *  $ hexdump -C a > a_hexdump; hexdump -C b > b_hexdump
 *  $ diff a_hexdump b_hexdump
 *
 * example output:
 * < 00000a80  3a 20 30 78 37 66 66 64  35 66 63 64 62 65 63 30  |: 0x7ffd5fcdbec0|
 * ---
 * > 00000a80  3a 20 30 78 37 66 66 65  30 37 36 63 33 37 30 30  |: 0x7ffe076c3700|
 *
 *  $ hexdump -s 0xa70 -C a | head -n3
 *
 * example output:
 * 00000a70  72 65 73 73 20 77 69 74  68 20 77 69 64 74 68 29  |ress with width)|
 * 00000a80  3a 20 30 78 37 66 66 64  35 66 63 64 62 65 63 30  |: 0x7ffd5fcdbec0|
 * 00000a90  2e 0a 74 65 73 74 35 33  28 27 2d 27 2c 20 77 69  |..test53('-', wi|
 *
 * There is a difference at test 52
 *
 * Return: Always 0
 */
int main(void)
{/*
	int i =  12;
	long int l = 12l;
	short int h = 12;*/
	int *n = NULL;

	/*non spec _printf conditions*/
	_printf("non spec _printf conditions\n\n");
	printf("non spec _printf conditions\n\n");
	_printf("test01(ptr string):String");
	printf("test01(ptr string):String");
	_printf("test02([fwplf]format tags out of order):%+- 0#9.5lh+i.\n",1);
	printf("test02([fwplf]format tags out of order):%+- 0#9.5lh+i.\n",1);
	_printf("test03([fwpf]format tags out of order):%+- 0#9.5+i.\n",1);
	printf("test03([fwpf]format tags out of order):%+- 0#9.5+i.\n",1);
	_printf("test04([fwf]format tags out of order):%+- 0#9+i.\n", 1);
	printf("test04([fwf]format tags out of order):%+- 0#9+i.\n", 1);
	_printf("test05([fplf]format tags out of order):%.5lh+- 0#i.\n",1);
	printf("test05([fplf]format tags out of order):%.5lh+- 0#i.\n",1);
	_printf("test06([flf]format tags out of order):%lh+- 0#i.\n",1);
	printf("test06([flf]format tags out of order):%lh+- 0#i.\n",1);
	_printf("test07[fwpl](format tags in order no spec):%+- 0#9.5lh\n",1);
	printf("test07[fwpl](format tags in order no spec):%+- 0#9.5lh\n",1);
	_printf(NULL);
	/*printf(NULL);*/
	_printf("\n\n");
	printf("\n\n");

	/*string specifier conditions*/
	_printf("s and c specifier conditions\n\n");

	_printf("test10(string spec with all flags, width, prec): %+0 #-9.5s, %+0 #-9.5c.", "holberton", 'c');

/*	_printf("test11(string spec with wrong argument will seg fault):%s, %s, %s.\n", 1, 'c', &i);*/

	_printf("test12(string spec with -, width, prec): %-9.5s, %-9c.\n", "holberton", 'c');

	_printf("test13(string spec with width < prec and '-'): %-2.5s.\n", "holberton");

	_printf("test14(string spec with width, prec): %9.5s, %9c.\n", "holberton", 'c');

	_printf("test15(string spec with , all flags minus '-' width, prec): %+ #09.5s.\n", "holberton");

	_printf("test16(passing null to s, c): %s, %c.\n\n", n, n);

	/*i and d  specifier conditions*/
	/*
	_printf("i and d specifer conditions\n\n");

	_printf("test200(negative number with all flags):%+- 0#i.\n", -1);

	_printf("test201(positive number with all flags):%+- 0#d.\n", 1);

	_printf("test202(positive number with '+', ' '):%+ d.\n", 1);

	_printf("test203(positive number with' '):% d.\n", 1);

	_printf("test204('+', '0', with precision > width):%0+9.5d.\n", 1);

	_printf("test205('+', '0', with precision < width):%+05.9d.\n", 1);

	_printf("test206(' ', with precision > width):%- 9.5d.\n", 1);

	_printf("test207(length: long):%ld.\n", l);

	_printf("test208(length: short):%hd.\n", h);

	_printf("test209(' ', '0' with precision > width):%-0 9.5d.\n", 1);

	_printf("test210(considering null, spec d):%i.\n\n", n);
*/
	/*u specifer conditions*/
	/*
	_printf("u specifer conditions\n\n");

	_printf("test30(negative number with all flags):%+- 0#u.\n", -1);

	_printf("test31(positive number with all flags):%+- 0#u.\n", 1);

	_printf("test32(positive number with '+', ' '):%+ u.\n", 1);

	_printf("test33('0', with precision > width):%09.5u.\n", 1);

	_printf("test34( '-', '0', with precision < width):%-05.9u.\n", 1);

	_printf("test35('0','-'  with precision > width):%-09.5u.\n", 1);

	_printf("test36(length: long):%lu.\n", l);

	_printf("test37(length: short):%hu.\n", h);

	_printf("test38(considering null, spec u):%u.\n\n", n);
*/
	/*o, x, X specifier conditions*/
	/*
	_printf("o, x, X specifer conditions\n\n");

	_printf("test30(negative number with all flags):%+- 0#o, %+- 0#x, %+- 0#X.\n", -1, -1, -1);

	_printf("test31(positive number with all flags):%+- 0#o, %+- 0#x, %+- 0#X.\n", 1, 1, 1);

	_printf("test32(positive number with '+', ' '):%+ o, %+ x, %+ X.\n", 1, 1, 1);

	_printf("test33('0', with precision > width):%09.5o, %09.5x %09.5.\n", 1, 1, 1);

	_printf("test34( '-', '0', with precision < width):%-05.9o, %-05.9x, %-05.9X.\n", 1, 1, 1);

	_printf("test35('0','-'  with precision > width):%-09.5o, %-09.5x, %-09.5X.\n", 1, 1, 1);

	_printf("test36(length: long):%lo, %lx, %lX.\n", l, l, l);

	_printf("test37(length: short):%ho, %hx, %hX.\n", h, h, h);

	_printf("test38(consinder null, spec o, x, X):%o, %x, %X.\n\n", n, n, n);
*/
	/*binary specifier conditions*/
	/*
	_printf("b specifer conditions\n\n");

	_printf("test40(negative number with all flags):%+- 0#b.\n", -1);

	_printf("test41(positive number with all flags):%+- 0#b.\n", 1);

	_printf("test42(positive number with '+', ' '):%+ b", 1);

	_printf("test43('0', with precision > width):%09.5b.\n", 1);

	_printf("test44( '-', '0', with precision < width):%-05.9b.\n", 1);

	_printf("test45('0','-'  with precision > width):%-09.5b.\n", 1);

	_printf("test46(length: long):%lb.\n", l);

	_printf("test47(length: short):%hb.\n", h);

	_printf("test48(considering null):%b.\n\n", n);
*/
	/*pointer specifier conditions*/
	/*
	_printf("p specifer conditions\n\n");

	_printf("test50(address number with all flags):%+- 0#9.5lhp.\n", &l);

	_printf("test51(address with '+', ' '):%+ 10p.\n", &l);

	_printf("test52(address with width):% 10p.\n", &l);

	_printf("test53('-', width):%-15p.\n", &l);

	_printf("test54(width):%15p.\n", &l);

	_printf("test55(consinder null, spec p):%p.\n\n", n);
*/
	/*printing % */
	_printf("printing %\n\n");

	_printf("test60 odd number of % % % % %\n");

	_printf("test61 even number of % % % % % %\n");

	_printf("test62 odd number with new line of % % % % %\n");

	_printf("test63 % % % % %");
	_printf("\n");

	_printf("%");
	_printf("\n\n");

	return (0);
}
