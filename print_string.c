#include "main.h"

/**
 * print_string - function to print string
 * @str: the string to print
 * Return: return the value 1
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
	}
	else
	{
		for (len = 0; str[len] != '\0'; len++)
		{
			putchar(str[len]);
		}
	}

	return (1);
}
