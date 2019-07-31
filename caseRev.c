#include "holberton.h"
/**
 * rev_string - reverses string
 * string_length - finds length of the string
 * @s: s str
 *
 * string_length - (char *pointer)
 */
int rev_string(char *s)
{
	int i = 0;

	i = _strlen(s);
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}


	return (_strlen(s));
}
