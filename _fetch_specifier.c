#include "main.h"

/**
 * _fetch_specifier - A function that fetches for % specifier.
 * @format: A character.
 *
 * Return: # 0 if % is detected. (Success).
 *         # 1 otherwise. (Failure).
 */
int _fetch_specifier(char format)
{
	return (format != '%');
}
