#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers -  prints the numbers, from 0 to 9
 * Return:always success
 */

void print_most_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		if (i != 2 && i != 4)
		{
			_putchar('0' + i);
		}
		_putchar('\n');
	}
}
