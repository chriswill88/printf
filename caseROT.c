#include "holberton.h"
/**
 * rot13 - rotate 13 char
 * @z: string
 *
 *
 * Return: z
 */
int rot13(char *z)
{
	int x = 0;
	int y;
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (z[x] != '\0')
	{
		for (y = 0 ; a[y] != '\0' ; y++)
		{
			if (z[x] == a[y])
			{
				_putchar (b[y]);
				break;
			}
		}
		x++;
	}
	return (_strlen(z));
}
