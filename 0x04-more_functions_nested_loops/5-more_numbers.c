#include "main.h"
#include <stdio.h>

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 */

void more_numbers(void)
{
	int i = 0;

	while (i < 15)
		_putchar(i * '10');
		i++;

	_putchar('\n');
}
