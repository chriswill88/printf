#ifndef PRINTFHEAD_H_
#define PRINTFHEAD_H_

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int _printf(const char *format, ...);
int _strlen(char *s);
int caseC(unsigned char c);
int caseS(char *z);
char *rot13(char *z);
int caseD(int n);
int _putchar(char c);
void rev_string(char *s);
int switchget(va_list vl, const char *format, int x);


#endif
