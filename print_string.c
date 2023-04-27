#include "main.h"

/**
 * print_string - function that print a string from _printf
 * @str: the string to print
 * @Return: return the number of string printed
 */

int print_string(char *str)
{
	int len;
	char *null = "(null)";

	if (str == NULL)
	{
		for (len = 0; null[len] != '\0'; len++)
		{
			putchar(null[len]);
		}
		return (len);
	}
	else
	{
		for (len = 0; str[len] != '\0'; len++)
		{
			putchar(str[len]);
		}
		return (len);
	}
	return (0);
}
