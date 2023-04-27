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
	int k = 0, len = 0;
	char *str, *null = "(null)";

	switch (*(format + *i + 1))
	{
		case 'c':
			putchar(va_arg(ap, int));
			k++;
			break;
		case 's':
			str = va_arg(ap, char *);
			if (str == NULL)
			{
				while (null[len] != '\0')
				{
					putchar(null[len]);
					k++;
				}
			}
			else
			{
				while (str[len] != '\0')
				{
					putchar(str[len]);
					k++;
				}
			}
			break;
		case '%':
			putchar(format[*i]);
			k++;
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
