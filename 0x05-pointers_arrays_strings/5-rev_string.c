#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: A pointer to a character string.
 * Return: None.
 */

void rev_string(char *s)
{
	int length = 0;
	int i;
	char temp;

	/* Find the length of the string */
	while (s[length] != '\0')
		length++;

	/* Reverse the string */
	for (i = 0; i < length / 2; i++)
	{
		temp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;
	}
}
