#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: the number to calculate the square root of
 *
 * Return: the natural square root of @n or -1 if it does not exist
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (sqrt_helper(n, 0));
}

/**
 * sqrt_helper - recursive helper function to find the square root of @n
 *
 * @n: the number to calculate the square root of
 * @i: the current integer to test as a possible square root
 *
 * Return: the natural square root of @n or -1 if it does not exist
 */

int sqrt_helper(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);

	return (sqrt_helper(n, i + 1));
}

