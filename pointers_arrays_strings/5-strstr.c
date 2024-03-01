#include "main.h"

/**
 * _strstr - Function that locates a substring.
 *
 * @haystack: locate a substring
 * @needle: substring to locate
 *
 * Return: pointer to the beginning of the located substring,
 * or NULL, if substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	char *a = haystack;
	char *b = needle;

	while (*a)
	{
		b = needle;
		a = haystack;
		while (*b)
		{
			if (*a == *b)
			{
				b++;
				a++;
			}
			else
				break;
		}
		if (*b == '\0')
			return (haystack);
		haystack++;
	}
	return (0);
}
