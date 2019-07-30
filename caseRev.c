#include "holberton.h"
/**
 * rev_string - reverses string
 * string_length - finds length of the string
 * @s: s str
 *
 * string_length - (char *pointer)
 */
void rev_string(char *s)
{
	int _strlen(char *);
	int length, c;
	char *begin, *end, temp;

	length = _strlen(s);
	begin = s;
	end = s;

	for (c = 0 ; c < length - 1 ; c++)
	{
		end++;
	}
	for (c = 0 ; c < length / 2 ; c++)
	{
		temp = *end;
		*end = *begin;
		*begin = temp;

		begin++;
		end--;
	}
}
