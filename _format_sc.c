#include "main.h"

/**
 * _format_sc - A function that handles and prints char/string args..
 * @list: A variable of type va_list.
 * @fmt: Format specifier, either s (for string), or c (for char).
 * @charCount: A pointer to the total printed characters.
 */

void _format_sc(va_list list, const char *fmt, int *charCount)
{
	switch (*fmt)
	{
	case 's':
	{
		char *placeholder = va_arg(list, char *);

		if (placeholder == NULL)
		{
			placeholder = "(null)";
		}
		_puts(placeholder);
		*charCount += _strlen(placeholder);
		break;
	}
	case 'c':
	{
		char placeholder = va_arg(list, int);

		*charCount += write(1, &placeholder, 1);
		break;
	}
	}
}
