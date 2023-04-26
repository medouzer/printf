#include "main.h"

/**
 * _printf - function thats print all thing
 * @format: is the format of what we print
 * Return: return the number of character
 */

int _printf(const char *format, ...)
{
	int i = 0, count = 0;
	va_list ap;

	va_start(ap, format);

	if (format == NULL)
		return (-1);

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				return (-1);
			count += get_function(format, ap, &i);
		}
		else
		{
			putchar(format[i]);
			count++;
		}
		i++;
	}

	va_end(ap);

	return (count);
}
