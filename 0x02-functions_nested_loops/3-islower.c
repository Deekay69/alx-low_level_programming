#include "main.h"
#include "ctype.h"

/**
 * main -entry point
 * _islower -  checks for lowercase character.
 * Return: 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	else
	return (0);

}