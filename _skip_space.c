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
