#include "main.h"

/**
 * print_last_digit - print last digit
 * @x: number to print last digit.
 * Return: last digit.
 */
int print_last_digit(int x)
{
	if (x < 0)
		x *= -1;
	return (x % 10);
}
