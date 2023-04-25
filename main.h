#ifndef MAIN_H
#define MAIN_H

int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list ap);
int print_percent(va_list ap);
int print_string(va_list ap);

typedef struct form_format
{
	char *ch;
	int (*f)(va_list);
} form_f;

#endif
