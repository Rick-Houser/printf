#include <stdio.h>
#include <limits.h>
#include "holberton.h"

int main(void)
{
        int len, len2;
        char c = 'H';
        char *s = "Holberton";
        

        len = _printf("[%c]-[%s]-[%%]\n", c, s);
        len2 = printf("[%c]-[%s]-[%%]\n", c, s); /* +1 for string terminator with %s */

        _printf("my printf -- [ %d ] | original printf -- [ %d ]\n", len, len2);
        printf("my printf -- [ %d ] | original printf -- [ %d ]\n", len, len2);

        return (0);
}
