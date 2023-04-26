#include "main.h"

/**
 * print_string - function to print string
 * @str: the string to print
 * @k: argument from getfunction
 * Return: return the value 1
 */

int print_string(char *str, int k)
{
	int len;
	char *null = "(null)";
	if (str == NULL)
	{
		for (len = 0; null[len] != '\0'; len++)
		{
			putchar(null[len]);
			k++;
		}
	}
	else
	{
		for (len = 0; str[len] != '\0'; len++)
		{
			putchar(str[len]);
			k++;
		}
	}

	return (1);
}
