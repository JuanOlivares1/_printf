#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

#include <stdarg.h>

int _putchar(char c);
void _puts(char *str, int *sz);
void print_int(int num, int *sz);
void print_un_int(unsigned int num, int *sz);
void printf_aux(va_list arg, const char * const format,
		unsigned int i, int *sz);
int _printf(const char * const format, ...);
char *hexaoctal(unsigned int num, int base, char op);

#endif
