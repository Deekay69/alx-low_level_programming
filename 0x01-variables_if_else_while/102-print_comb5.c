#include <stdio.h>

/**
 * main - main body
 * Decription: Prints combinations to 99
 * Return: 0
 */
int main(void)
{
	int x, y;

	for (x = 0; x <= 98; x++)
	{
		for (y = x + 1; y <= 99; y++)
		{
			putchar((x / 10) + '0');
			putchar((x % 10) + '0');
			putchar(' ');
			putchar((x / 10) + '0');
			putchar((x % 10) + '0');

			if (x == 98 && y == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);

}
