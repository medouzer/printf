#include "main.h"

/**
 * print_number - function that print numbers from _printf
 * @num: the number to print
 * @k: is the counter for eche pointer created
 * Return: return 0;
 */

int print_number(int num, int *k)
{
	if (num == -2147483648)
        {
                putchar('-');
                putchar('2');
                *k = *k + 2;
                print_number(147483648, k);
                return (0);
        }
	else if (num < 0)
	{
		putchar('-');
		*k = *k + 1;
		num *= (-1);
	}

	if (num >= 10)
	{
		print_number(num / 10, k);
		putchar((num % 10) + '0');
		*k += 1;
	}
	else if (num < 10)
	{
		putchar(num + '0');
		*k = *k + 1;
	}

	return (0);
}
