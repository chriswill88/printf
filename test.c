#include "holberton.h"


int main(void)
{
	char *d = "bobby";
	char c = '!';

	_printf("%shello%%%c%s", d, c, "lol");
	_printf("%s%s%s", d, d, d);

	return(0);
}
