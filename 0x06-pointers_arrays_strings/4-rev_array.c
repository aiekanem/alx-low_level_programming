#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: Pointer to the array of integers.
 * @n: Number of elements in the array.
 * Return: void.
 */

void reverse_array(int *a, int n)
{
    int i, j, tmp;

    /* Swap the elements in the array until the middle is reached */
    for (i = 0, j = n - 1; i < j; i++, j--)
    {
        tmp = a[i];
        a[i] = a[j];
        a[j] = tmp;
    }
}
