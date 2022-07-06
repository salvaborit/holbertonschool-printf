#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

int _printf(const char *format, ...);
int _putchar(char c);

int print_char(va_list list);
int print_string(va_list list);
int print_percent(va_list list);
typedef struct format
{
	char *let;
	int (*func)(va_list list);

} format_t;

#endif
