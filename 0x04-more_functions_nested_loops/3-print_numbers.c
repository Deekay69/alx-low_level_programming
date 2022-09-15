#include "main.h"
#include <stdio.h>

/**
 * print_numbers - prints the numbers, from 0 to 9, followed by a new line.
 * Description: Putchar used twice
 */

void print_numbers(void)
{
	int i;
	
	i = 0;	
	while (i < 10)
	{
		_putchar(i);
	}
	_putchar('\n');
}
