#include "main.h"
#include <stdarg.h>
#include  <stddef.h>

int (*find_printfunctions(char format_char, specifier_t specifiers[]))(va_list)
{

	unsigned int i = 0;

	while (specifiers[i].specifier !=NULL)
	{
		if (specifiers[i].specifier[0] == format_char)
		{
			return (specifiers[i].print);
		}
		i++
	}
	return (NULL);

}

int process_format(const char *format, va_list args, specifiers specifiers[])
{
	return (0);
}
int _printf(const char *format, ...)
{
	va_list args;
	int len;

	specifier_t specifiers[] = {
		{"c", print_char},
		{"s", print_string},
		{NULL, NULL}
	};

	va_start(args, format);
	len = process_format(format, args, specifers);
	va_end(args);
}