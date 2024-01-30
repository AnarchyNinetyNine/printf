#include "main.h"

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
