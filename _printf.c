#include <stdio.h>
#include "main.h"

/**
 * _printf - is the function that assest to print any format
 * @format: is the format that we use to print char or string
 * Return: return the number of character printed
 */

int _printf(const char *format, ...)
{
	int i = 0, count = 0;
	int (*f)(va_list);

	va_list ap;

	if (format == NULL)
		return (-1);

	va_start(ap, format);

	while (format[i])
	{
		while (format[i] != '%')
		{
			_putchar(format[i]);
			count++;
			i++;
		}

		if (format[i] == '\0')
			return (count);
		f = get_function(&format[i + 1]);

		if (f != NULL)
		{
			count = count + f(ap);
			i += 2;
			continue;
		}
		if (!format[i + 1])
			return (-1);

		if (format[i + 1] == '%')
		{
			i = i + 2;
		}
		else
			i++;
	}
	va_end(ap);
	return (count);
}
