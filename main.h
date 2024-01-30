#ifndef _MAIN_H_
#define _MAIN_H_

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <stdio.h>

int _fetch_specifier(char format);
void _handle_default_case(const char *fmt, int *charCount);
void _handle_fmt(va_list list, const char *format, int *charCount);
void _skip_space(const char *fmt);
void _format_digits(va_list list, const char *fmt, int *charCount);
void _format_uints(va_list list, const char *fmt, int *charCount);
void _format_sc(va_list list, const char *fmt, int *charCount);
int _strlen(char *s);
int _printf(const char *format, ...);
void _puts(char *s);
int _putchar(char c);

#endif /* _MAIN_H_ */
