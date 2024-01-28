#include "main.h"

/**
 * _puts - A function that prints a string.
 * @s: Pointer to a string.
 */

void _puts(char *s)
{
	if (*s == '\0')
		return;
	_putchar(*s);
	_puts(s + 1);
}
