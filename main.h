#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
int get_function(const char *format, va_list ap, int *i);
int print_number(int num, int *k);
int print_string(char *str);

#endif
