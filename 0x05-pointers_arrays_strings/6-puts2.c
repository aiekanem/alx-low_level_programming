#include "main.h"

/**
 * puts2 - Prints every other character of a string, starting with the first
 * character, followed by a new line.
 * @str: A pointer to a character string.
 * Return: None.
 */

void puts2(char *str)
{
	int i;

	/* Iterate through the string, printing every other character */
	for (i = 0; str[i] != '\0'; i += 2)
		_putchar(str[i]);

	/* Print a newline character to stdout */
	_putchar('\n');
}
