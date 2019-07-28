#include "holberton.h"


int main(void)
{
	char *d = "bobby";
	char c = '!';

	int len;
    int len2;


    len = _printf("%s\n", "hey now");
    len2 = printf("%s\n", "hey now");

    printf("_printf:[%d]\n", len);
    printf("printf:[%d]\n\n", len2);

	_printf("%shello%%%c%s", d, c, "lol");
	_printf("%s%s%s", d, d, d);

	return(0);
}
