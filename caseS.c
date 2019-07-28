#include "holberton.h"


int caseS(char *z)
{
	int i = 0;
	
	i = _strlen(z);

	write(STDOUT_FILENO, z, i);
	return (i);
}
