#include <stdio.h>

/**
 * main - main body
 * Description: Prints all numbers of base 16 in lowercase
 * Return: 0
 */
int main(void)
{
	char d;

	for (d = '0'; d <= '9'; d++)
	{
		putchar(d);
	}
	for (d = 'a'; d <= 'f'; d++)
	{
		putchar(d);
	}
	putchar('\n');
	return (0);

}
