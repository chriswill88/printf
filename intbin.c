#include "holberton.h"
/**
 * intbin - int to binary
 * @a: the int to convert
 * Return: # of bytes on success
 */
int intbin(int a)
{
	int i = 0, ret = 0;
	char ar[1042];
	if (a < 0)
		return (-1);

	while (a)
	{
		if (a & 1)
			ar[i] = ('1');
		else
			ar[i] = ('0');
		i++;
		a >>= 1;
	}
	i--;
	while (i >= 0)
	{
		_putchar (ar[i]);
		ret++;
		i--;
	}
	ret--;
	return (ret);
}
