#ifndef MAIN_H_
#define MAIN_H_

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

int _putchar(char c);
int _printf(const char *format, ...);
int putint(int num);
int _formatchecker(const char *format, va_list args);
int _process_format_char(char format_char, va_list args);
int _printstring(char *str);








#endif
