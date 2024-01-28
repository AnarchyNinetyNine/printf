#include "main.h"

/**
 * _printf - A function that produces output according to a format.
 *           A mimic of normal prinft C function.
 * @format: A Formatted character string.
 *
 * Return: # Number of printed characters. on (Succeess).
 *         # -1 otherwise, on (Failure).
 */

int _printf(const char * const format, ...)
{
	va_list list;
	int *charCount = malloc(sizeof(int));
	char fmt;
	int count;
	const char *formatPlaceholder;

	*charCount = 0;
	formatPlaceholder = format;
	if (!format || (*(format) == '%' && !*(format + 1)))
		return (-1);

	if ((*format == '%' && (*(format + 1) == ' ' && !*(format + 2))))
		return (-1);

	va_start(list, format);

	while (*formatPlaceholder)
	{
		switch (_fetch_specifier(*formatPlaceholder))
		{
		case 0:
		{
			fmt = *(++formatPlaceholder);
			_format_sc(list, fmt, charCount);
			break;
		}
		default:
		{
			*charCount += _putchar(*formatPlaceholder);
			break;
		}
		}
		++formatPlaceholder;
	}
	va_end(list);
	count = *charCount;
	free(charCount);
	return (count);
}
