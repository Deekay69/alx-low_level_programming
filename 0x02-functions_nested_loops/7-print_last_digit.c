#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @n: Character printed
 * Return: Always success
 */
int print_last_digit(int n)
{
	int last_num = 0;

	last_num = n % 10;

	if (n < 0)
	{
		last_num = last_num * -1;
	}
	_putchar(last_num + '0');
	return (last_num);
}
