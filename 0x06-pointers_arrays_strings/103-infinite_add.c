#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer to store the result
 * @size_r: buffer size
 * Return: pointer to result, or 0 if result cannot be stored in r
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1, len2, max_len, sum, carry = 0, i, j;
	char tmp;

	len1 = strlen(n1);
	len2 = strlen(n2);
	max_len = (len1 > len2) ? len1 : len2;

	if (max_len + 1 > size_r)
		return (0);

	r[max_len + 1] = '\0';

	for (i = len1 - 1, j = len2 - 1; i >= 0 || j >= 0; i--, j--)
	{
		sum = carry;

		if (i >= 0)
			sum += n1[i] - '0';

		if (j >= 0)
			sum += n2[j] - '0';

		if (sum >= 10)
		{
			carry = 1;
			sum -= 10;
		}
		else
			carry = 0;

		r[max_len--] = sum + '0';
	}

	if (carry == 1)
	{
		if (max_len < 0)
			return (0);

		tmp = r[max_len] + 1;

		if (tmp > '9')
			return (0);

		r[max_len] = tmp;
	}

	return (r + max_len + 1);
}
