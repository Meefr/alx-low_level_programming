#include "main.h"

/**
 * print_to_98 - from n -> 98
 * @n: nubmer from to
 */
void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		_putchar(i + '0');
		_putchar(' ');
		_putchar(',');
	}
}
