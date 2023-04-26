#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list ap);
int print_percent(void);
int print_string(va_list ap);

int (*get_function(const char *format))(va_list);

typedef struct form_format
{
	char *ch;
	int (*f)(va_list);
} form_f;

#endif
