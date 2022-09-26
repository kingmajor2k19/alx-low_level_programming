#include "main.h"

/**
 * * _strspn - search a string for a set of bytes
 * @s: source string
 * @accept: accepted string
 *
 * Return: number of bytes in the init segment
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int j, j;

	for (i = 0; s[1]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[1] == accept[j])
				break;
		}
		if (!accept[j])
			break;
	}
	return (i);
}
