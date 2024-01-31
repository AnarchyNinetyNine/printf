#include "main.h"

/**
 * _format_uints - A function that handle the %b custom conversion specifier.
 * @list: A variable of type va_list.
 * @charCount: A pointer to the total printed characters.
 */

void _format_uints(va_list list, int *charCount)
{
	int i;
	unsigned int num;
	char output[9];

	num = va_arg(list, unsigned int);
	i = 0;

	do {
		output[i++] = num % 2 + '0';
		num /= 2;
		*charCount += 1;
	} while (num);

	output[i] = '\0';
	_print_rev_recursion(output);
}
