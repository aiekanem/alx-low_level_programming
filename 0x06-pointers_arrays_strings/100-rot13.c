#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: input string
 * Return: encoded string
 */

char *rot13(char *s)
{
	char *str = s;
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; (str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'); j++)
		{
			if ((str[i] >= 'a' && str[i] <= 'm') || (str[i] >= 'A' && str[i] <= 'M'))
				str[i] += 13;
			else
				str[i] -= 13;

			if (j == 0)
				break;
		}
	}

	return (s);
}
