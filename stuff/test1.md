#include "holberton.h"


int main(void)
{
	char *d = "bobby";
	char c = '!';

	_printf("hello%%%c", c);
	_printf("%s%s%s", d, d, d);
	_printf(NULL);
	printf(NULL);
	return(0);
}
