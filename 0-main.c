#include "printfhead.h"
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
	char *s;
	char cvar;
	char per;
	va_start(vl, format);
	while (format[x] != '\0')
	{
		if (format[x] == '%')
		{
			min++;
			switch(format[x + 1])
			{
			case 'c':
				cvar = va_arg(vl, int);
				write(STDOUT_FILENO, &cvar, 1);
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
				strbit += _strlen(s);
				printf("sizeof string = %d\n", strbit);
				s = va_arg(vl, char*);
				write(STDOUT_FILENO, s, _strlen(s));
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
		printf(" <-| index of format --> %d, char at format --> %c\n", x, format[x]);
		x++;
	}
	total = ((x - min) + strbit);
	printf("%d\n", total);
	va_end(vl);
	return (x - min);
}
