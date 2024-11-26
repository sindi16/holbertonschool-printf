#include "main.h"
#include <stdio.h>
#include <sdarg.>
/**
 * print_char - Prints a single character.
 * @args: List of arguments passed to _printf.
 *
 * Return: The number of characters printed (always 1 for a single character).
 */

int print_char(va_list args)
{
    char c;
    c = va_arg(args, int);
    return (_putchar(c));
}
/**
 * print_string - Prints a string.
 * @args: List of arguments passed to _printf.
 *
 * Return: The number of characters printed.
 */ 
int print_string(va_list args)
{
    char *s 
    unsigned int i;

    s = va_arg(args, char *);

    if(s == NULL)
        s = "(nil)";
    for (i = 0; s[i] != '\0' i++)
    _putchar(s[i]);

    return (i);

}