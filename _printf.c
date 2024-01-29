#include "main.h"

/**
 * _printf - A function that produces output according to a format.
 *           A mimic of normal prinft C function.
 * @format: A Formatted character string.
 *
 * Return: # Number of printed characters. on (Succeess).
 *         # -1 otherwise, on (Failure).
 */
int _printf(const char *format, ...)
{
	va_list list;
	int *charCount;
	int count;
	
	count = 0;
	charCount = &count;
	if (!format || (*(format + 0) == '%' && !*(format + 1)))
		return (-1);
	if (*(format + 0) == '%' && (*(format + 1) == ' ' && !*(format + 2)))
		return (-1);
	if (*(format + 0) == '%' && (*(format + 1) == ' '))
	{
		while (*(format + 1) == ' ')
			format++;
		format++;
	}
	va_start(list, format);
	while (*format)
	{
		switch (_fetch_specifier(*format))
		{
		case 0:
		{
			_format_sc(list, ++format, charCount);
			break;
		}
		default:
		{
			*charCount += _putchar(*format);
			break;
		}
		}
		++format;
	}
	va_end(list);
	return (count);
}
