#include "main.h"

/**
 * print_last_digit - print last digit
 * @x: number to print last digit.
 * Return: last digit.
 */
int print_last_digit(int x)
{
	int tmp;

	if (x < 0)
		x *= -1;
	tmp = x % 10;
	return (tmp);
}
