#include "main.h"

/**
 * get_function - function that chose the function on format
 * @format: the format to print
 * @ap: the list of arg to print
 * @i: containt the addres of the format position
 * Return: return number
 */

int get_function(const char *format, va_list ap, int *i)
{
	int k = 0, number;
	char *str;

	switch (*(format + *i + 1))
	{
		case 'c':
			putchar(va_arg(ap, int));
			k++;
			break;
		case 's':
			str = va_arg(ap, char *);
			k += print_string(str);
			break;
		case '%':
			putchar(format[*i]);
			k++;
			break;
		case 'd':
		case 'i':
			number = va_arg(ap, int);
			print_number(number, &k);
			break;
		default:
			putchar(format[*i]);
			k++;
			*i -= 1;
			break;
	}

	*i += 1;

	return (k);
}
