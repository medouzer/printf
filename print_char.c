#include <stdio.h>
#include "main.h"

/**
 * print_char - function that print a character
 * @ap: is the list of character to print
 * Return: the value 1
 */

int print_char(va_list ap)
{
	char c;

	c = va_arg(ap, int);
	_putchar(c);

	return (1);
}
