#include "main.h"

/**
 * puts_half - Prints the second half of a string, followed by a new line.
 * @str: A pointer to a character string.
 * Return: None.
 */

void puts_half(char *str)
{
	int length = 0;
	int i;

	/* Find the length of the string */
	while (str[length] != '\0')
		length++;

	/* Calculate the starting index for the second half of the string */
	if (length % 2 == 0)
		i = length / 2;
	else
		i = (length - 1) / 2 + 1;

	/* Print the second half of the string */
	for (; str[i] != '\0'; i++)
		_putchar(str[i]);

	/* Print a newline character to stdout */
	_putchar('\n');
}
