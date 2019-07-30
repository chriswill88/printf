#include "holberton.h"
/**
 * _printf - prints any data type to stdout
 * @format: the string with the operators for the types to be printed
 * Return: the number of bytes being printed
 */
int _printf(const char *format, ...)
{
	va_list vl;
	int x = 0, min = 0, total = 0, strbit = 0;
	char *s, per;

	if (format == NULL)
		return (-1);
	if (*format == '\0')
		return (0);
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
				caseD(va_arg(vl, int));
				break;
			case 'i':
				caseD(va_arg(vl, int));
				break;
			default:
				return (-1);
			}
			x++;
		}
		else
			write(STDOUT_FILENO, &format[x], 1);
		x++;
	}
	total = ((x - min) + strbit);
	va_end(vl);
	return (total);
}
