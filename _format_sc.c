#include "main.h"

/**
 * _skip_space - A function that moves fmt to the next location if space found.
 * @fmt: Format specifier.
 */

void _skip_space(const char *fmt)
{
	while (*(fmt) == ' ')
		fmt++;
}

/**
 * _handle_default_case - Handle defualt case.
 * @fmt: Format Specifier.
 * @charCount: A pointer to the total printed characters.
 */

void _handle_default_case(const char *fmt, int *charCount)
{
	*charCount += _putchar('%');
	*charCount += _putchar(*(fmt));
}

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
		int placeholder = va_arg(list, int);

		*charCount += write(1, placeholder, 1);
		break;
	}
	case '%':
	{
		*charCount += _putchar(*fmt);
		break;
	}
	case ' ':
	{
		_skip_space(fmt);
		_format_sc(list, fmt, charCount);
		break;
	}
	default:
	{
		_handle_default_case(fmt, charCount);
		break;
	}
	}
}
