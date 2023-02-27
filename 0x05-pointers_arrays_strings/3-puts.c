#include "main.h"

/**
 * _puts - Prints a string to stdout, followed by a new line.
 * @str: A pointer to a character string.
 * Return: None.
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
