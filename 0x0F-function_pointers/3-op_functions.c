#include "3-calc.h"

/**
 * op_add - calculate the sum of two intergers
 * @a: first interger
 * @b: second interger
 *
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub -calculates the difference of two intergers
 * @a: first interger
 * @b: second interger
 *
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - calculates the multiplication of two numbers
 * @a: first interger
 * @b: second interger
 *
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return ( a * b);
}

/**
 * op_div - divides two intergers
 * @a: first interger
 * @b: second interger
 *
 * Return: result of dividion od a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns the remainder of the division of a by b
 * @a: first interger
 * @b: second interger
 *
 * Return: result of the the division of a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
