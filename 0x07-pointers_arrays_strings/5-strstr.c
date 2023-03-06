#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: pointer to the string to search
 * @needle: pointer to the substring to find
 * Return: pointer to the beginning of the located substring, or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	char *s1 = haystack - 1;
	int len, count;

	for (len = 0; *(needle + len); len++)
		;

	do {
		s1++;
		for (count = 0; count < len; count++)
			if (*(s1 + count) != *(needle + count))
				break;
		if (count == len)
			return (s1);
	} while (*s1 != '\0');

	return (0);
}
