#include "main.h"

/**
 * times_table - displaay the 9 times table
 */
void times_table(void)
{
	int s = 1;
	int index;
	int j;
	int n = 0;

	for (index = 0; index < 10; index++)
	{
		for (j = 0; j < 10; j++)
		{
			_putchar(n + '0');
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			n += s;
		}
		s++;
		n = 0;
		_putchar('\n');
	}
}
