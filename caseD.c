#include "holberton.h"
/*
 * print_number - as name states
 * @n: variable 
 * Return: Always 0.
 */
void print_number(int n)
{
	int b;

	if (n > 0)
	{
		n *= -1;
		for (b = 1000000000; b > 0; b /= 10)
		{
			if (n / b != 0)
			{
				_putchar(((-n / b) % 10) + '0');
			}
		}
	}
	else if (n == 0)
	{
		_putchar('0');
	}
	else if (n < 0)
	{
		_putchar('-');
		for (b = 1000000000; b > 0; b /= 10)
		{
			if (n / b != 0)
			{
				if (n < -2147483647)
					_putchar((((-n / b) % 10) * -1) + '0');
				else
					_putchar(((-n / b) % 10) + '0');
			}
		}
	}
}
