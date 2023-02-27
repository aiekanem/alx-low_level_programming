#include "main.h"

/**
 * print_array - Prints n elements of an array of integers, followed by a new line.
 * @a: A pointer to an integer array.
 * @n: The number of elements of the array to be printed.
 * Return: None.
 */

void print_array(int *a, int n)
{
	int i;

	/* Print the first n-1 elements of the array followed by a comma and a space */
	for (i = 0; i < n - 1; i++)
		printf("%d, ", a[i]);

	/* Print the last element of the array followed by a new line */
	if (n > 0)
		printf("%d\n", a[n - 1]);
}
