#include "holberton.h"
/**
 *
 *
 *
 *
 */
void print(long n)
{
	if (n < 0)
	{
		_putchar ('-');
		n = -n;
	}
	if (n / 10)
	{
		print(n/10);
		_putchar(n%10 + '0');
	}
}
