#include <stdio.h>

/**
 * main -main body
 * Description: prints possible different combinations of 2 digits
 * Return: 0
 */
int main(void)
{
	int i, c;

	for (i = '0'; i <= '9'; i++)
	{
		for (c = '0'; c <= '9'; c++)
		{
			if (i < c)
			{
				putchar(i);
				putchar(c);
				if (i != '8' || (i == '8' && c != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}

	}
	putchar('\n');
	return (0);

}
