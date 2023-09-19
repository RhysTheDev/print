#ifndef MAIN_H_
#define MAIN_H_

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include <stdbool.h>

int _putchar(char c);
int _printf(const char *format, ...);
int putint(long num);
int _formatchecker(const char *format, va_list args);
int _process_format_char(char format_char, va_list args);
int _printstring(char *str);
int _put_unsigned_int(unsigned int num);
int _put_octal(unsigned int num);
int _put_hex(unsigned int num, int uppercase);
int _print_unique_chars(char *str);
int _print_address(void *ptr);
void _print_address_recursive(unsigned long address);


#endif
