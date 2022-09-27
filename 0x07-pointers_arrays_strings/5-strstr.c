#include "main.h"

/**
 * _strstr - locate a substring
 * @haystack: the string to search
 * @needle: the string to find
 *
 * Return: char value
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *one = haystack;
		char *two = needle;

		while (*one == *two && *two != '\0')
		{
			one++;
			two++;
		}
		if (*two == '\0')
			return (haystack);
	}

	return (NULL);
}
