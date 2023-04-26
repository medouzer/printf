#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * get_function - is the function to determinate the function
 * to use on _printf
 * @format: the format entred by the user
 * Return: return the value NULL or function to use
 */

int (*get_function(const char *format))(va_list)
{
	int i = 0;
	form_f get_f[] = {
		{"c", print_char},
		{"s", print_string},
	};

	while (get_f[i].ch)
	{
		if (get_f[i].ch[0] == (*format))
			return (get_f[i].f);
		i++;
	}
	return (NULL);
}
