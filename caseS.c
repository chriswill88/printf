#include "holberton.h"


void caseS(char *z)
{
	write(STDOUT_FILENO, z, _strlen(z));
}
