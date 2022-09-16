#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers -  prints the numbers, from 0 to 9, followed by a new line.
 * Return:always success
 */

void print_most_numbers(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
