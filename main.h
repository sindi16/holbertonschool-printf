#ifndef MAIN_H
#define MAIN_H

int ft_printf(const char *format, ...);

int print_char(char c);
int print_integer(int num);
int print_unsigned(unsigned int num);
int print_pointer(void *ptr);
int print_float(double num);
int handle_format_specifier(char specifier, va_list args);
int print_string(const char *str);

#endif