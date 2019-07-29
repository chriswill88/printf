#include "holberton.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
/**
 * _printf - copy of printf function
 * @format: the operators for the data types to be printed
 * Return: the number of bytes
 */
int _printf(const char *format, ...)
{
	va_list vl;
	int x = 0, min = 0, total = 0, strbit = 0;
	char per;
	char *s;

	va_start(vl, format);
	while (format[x] != '\0')
	{
		if (format[x] == '%')
		{
			min++;
			switch (format[x + 1])
			{
			case 'c':
				caseC(va_arg(vl, int));
				break;
			case 's':
				min++;
				s = va_arg(vl, char*);
				strbit += caseS(s);
				break;
			case '%':
				per = '%';
				write(STDOUT_FILENO, &per, 1);
				break;
			case 'd':

			default:
				break;
			}
			x++;
		}
		else
		{
			write(STDOUT_FILENO, &format[x], 1);
		}
		x++;
	}
	total = ((x - min) + strbit);
	va_end(vl);
	return (total);
}
