#include <stdio.h>

/**
 * main - main body
 *
 * Description: Print alphabet in lower case then upper case
 *
 * Return : (0)
 */
int main(void)

{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	for (c = 'A'; c <= 'Z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);

}
