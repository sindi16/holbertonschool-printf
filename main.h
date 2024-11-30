#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>

typedef struct Print
{
	char *id;
	int (*print)(va_list list);
} print;


int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list list);
int print_string(va_list list);
int print_int(va_list list);
int print_double(va_list list);
int (*get_function(char c))(va_list);

#endif
