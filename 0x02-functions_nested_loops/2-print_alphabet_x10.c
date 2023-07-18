#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times
 *
 * This function takes no parameters and returns no values.
 */
void print_alphabet_x10(void)
{
	char ch;
	int i;

	i = 0;

	while (i < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
	}
}

