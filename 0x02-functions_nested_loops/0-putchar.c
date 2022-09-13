#include "main.h"

/**
 * main - main body
 * Description: Prints _putchar and new line
 * Return: 0
 */
int main(void)
{
	char *c = "_putchar\n";

	while (*c)
	{
		_putchar(*c);
		c++;
	}
	return (0);

}
