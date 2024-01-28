#include "main.h"

/**
 * _format_sc - A function that handles and prints char/string args..
 * @list: A variable of type va_list.
 * @fmt: Format specifier, either s (for string), or c (for char).
 * @charCount: A pointer to the total printed characters.
 */

void _format_sc(va_list list, const char *fmt, int *charCount)
{
	while (*fmt == ' ')
		++fmt;
	switch (*fmt)
	{
	case 's':
	{
		char *placeholder = va_arg(list, char *);

		switch ((int)!placeholder)
		{
		case 1:
			placeholder = "nan";
			break;
		}
		_puts(placeholder);
		*charCount += _strlen(placeholder);
		break;
	}
	case 'c':
	{
		int placeholder = va_arg(list, int);

		*charCount += _putchar(placeholder);
		break;
	}
	case '%':
	{
		*charCount += _putchar(*fmt);
		break;
	}
	default:
	{
		*charCount += _putchar(*(--fmt));
		*charCount += _putchar(*(++fmt));
		break;
	}
	}
}

