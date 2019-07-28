#include "holberton.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
/**
 *
 *
 *
 *
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
			switch(format[x + 1])
			{
			case 'c':
				caseC(va_arg(vl, int));
				break;
			case 'i':
				min++;
				printf ("%d", va_arg(vl, int));
				break;
			case 'f':
				min++;
				printf ("%f", va_arg(vl, double));
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
			default:
				break;
			}
			x++;
		}
		else
		{
			write(STDOUT_FILENO, &format[x], 1);
		}
		/*printf(" <-| index of format --> %d, char at format --> %c\n", x, format[x]);*/
		x++;
	}
	total = ((x - min) + strbit);
	printf("%d\n", total);
	va_end(vl);
	return (total);
}
