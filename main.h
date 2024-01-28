#ifndef _PRINTF_
#define _PRINTF_

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

int _fetch_specifier(char format);
void _format_sc(va_list list, const char *fmt, int *charCount);
int _strlen(char *s);
int _printf(const char *format, ...);
void _puts(char *s);
int _putchar(char c);


#endif /* _PRINTF_ */
