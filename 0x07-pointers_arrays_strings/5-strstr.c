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
	unsigned int i = 0, j = 0;

	while (haystack[1])
	{
		while (needle[j] && (haystack[i] == needle[0]))
		{
			if (haystack[i + j] == needle[0])
				j++;
			else
				break;
		}
		if (needle[j])
		{
			i++;
			j = 0;
		}
		else
			return (haystack + i);
	}
	return (0);
}
