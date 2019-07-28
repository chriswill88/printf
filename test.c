#include "holberton.h"


int main(void)
{
	char *d = "bobby";
	char c = '!';

	int len;
    int len2;


    len = _printf("%shello%%%c%s\n", d, c, "lol");

    len2 = printf("%shello%%%c%s\n", d, c, "lol");

    printf("_printf:[%d]\n", len);
    printf("printf:[%d]\n\n", len2);

	return(0);
}
