#include "main.h"

/**
 * _format_digits - Prints an integer.
 * @list: A variable of type va_list.
 * @charCount: A pointer to the total printed characters.
 */

void _format_digits(va_list list, int *charCount)
{
	int ones, digitCol, multiplier, nCopy, n, flag;

	n = va_arg(list, int);
	flag = 0;
	multiplier = 1;
	if (n == 0)
	{
		*charCount += _putchar('0');
		return;
	}
	if (n == INT_MIN)
	{
		*charCount += _putchar('-');
		n = -(n + 1);
		flag = 1;
	}
	if (n < 0)
	{
		*charCount += _putchar('-');
		n *= -1;
	}
	nCopy = n;
	while (n / 10 != 0)
	{
		multiplier *= 10;
		n /= 10;
	}
	n = nCopy;
	while (multiplier / 10 != 0)
	{
		digitCol = n / multiplier;
		*charCount += _putchar(digitCol + '0');
		n %= multiplier;
		multiplier /= 10;
	}
	ones = n % 10;
	if (flag == 1)
		ones += 1;
	*charCount += _putchar(ones + '0');
}
