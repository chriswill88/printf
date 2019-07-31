#include "holberton.h"
/**
 * rev_string - reverses string
 * string_length - finds length of the string
 * @s: s str
 * Return: the number of bytes
 */
int rev_string(char *s)
{
	int i = 0;

	if (z == NULL)
	{
		write(STDOUT_FILENO, "(llun)", 6);
		return (6);
	}


	i = _strlen(s);
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}


	return (_strlen(s));
}
