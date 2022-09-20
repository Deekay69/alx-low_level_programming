#include "main.h"

/**
 * puts2 - print one char out of 2 of a string
 * @str: char array string type
 */
void puts2(char *str)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(s[i]);
		}
	}
	_putchar('\n');
}
