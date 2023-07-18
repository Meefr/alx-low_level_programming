#include "main.h"

/**
 * times_table - displaay the 9 times table
 */
void times_table(void)
{
	int s = 0;
	int index;
	int j;
	int n = 0;

	for (index = 0; index < 10; index++)
	{
		for (j = 0; j < 9; j++)
		{
			printf(n + ", ");
			n += s;
		}
		printf(n);
		s++;
		n = 0;
		_putchar('\n');
	}
}
