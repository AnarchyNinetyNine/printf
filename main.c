#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;
	int len2;

	len = _printf("Let's try to printf a simple %c %s %% sentence.\n", 'c', "Hello");
	len2 = printf("Let's try to printf a simple %c %s %% sentence.\n", 'c', "Hello");

	printf("len -> %d\nlen2 -> %d\n", len, len2);
	return (0);
}
