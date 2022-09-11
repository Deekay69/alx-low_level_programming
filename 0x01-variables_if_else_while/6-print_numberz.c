#include <stdio.h>

/**
 * main - main body
 * Description: Prints intergers 0 -9
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);

}
