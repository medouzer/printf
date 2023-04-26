#include <stdio.h>
#include "main.h"

/**
 * print_string - print a string
 * @ap: the of strings
 * Return: return the value 1
 */

int print_string(va_list ap)
{
	char *str;
	int i = 0;

	str = va_arg(ap, char *);
	if (str == NULL)
		str = "(null)";

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}

	return (1);
}
