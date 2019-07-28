#include "holberton.h"
#include <unistd.h>

int caseC(char v)
{
	write(STDOUT_FILENO, &v, 1);
	return(1);
}
