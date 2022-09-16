#include "main.h"
#include <stdio.h>

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 */

void more_numbers(void)
{
	int i;
	int num;
	
	i = 0;
	while (i < 10)
	{
		num = 0;
		while (num < 15)
		{
			if (num > 9)
				_putchar('0' + num / 10);

			_putchar('0' + num % 10);
			num++;
		}
	_putchar('\n');
	}
}
