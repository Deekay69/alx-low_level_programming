#include "main.h"

/**
 * main -main body
 * Description: Prints _putchar folowed by new line
 * Return: 0
 */
int main(void)
{
	char *c = "_putchar\n";

	while (*c)
	{
		putchar(c);
		c++;
	}
	return (0);
}
