#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: A pointer to a string.
 *
 * Return: The length of a string.
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 +  _strlen(s + 1));
}
