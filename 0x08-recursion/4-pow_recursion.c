#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - Returns the value of x raised to the power of y
 * @x: Base integer
 * @y: Exponent integer
 * Return: Result of x raised to the power of y, -1 if y < 0
 */

int _pow_recursion(int x, int y)
{
    if (y < 0)
        return (-1);
    if (y == 0)
        return (1);
    return (x * _pow_recursion(x, y - 1));
}
