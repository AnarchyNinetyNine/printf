#include "main.h"

/**
 * _handle_fmt - A function that handles format specifiers.
 * @list: A variable of type va_list.
 * @fmt: Format specifier, either s (for string), or c (for char).
 * @charCount: A pointer to the total printed characters.
 */

void _handle_fmt(va_list list, const char *fmt, int *charCount)
{
	if (*fmt == 's' || *fmt == 'c')
		_format_sc(list, fmt, charCount);
	else if (*fmt == '%')
		*charCount += _putchar(*fmt);
	else if (*fmt == ' ')
	{
		_skip_space(fmt);
		_handle_fmt(list, fmt, charCount);
	}
	else
		_handle_default_case(fmt, charCount);
}
