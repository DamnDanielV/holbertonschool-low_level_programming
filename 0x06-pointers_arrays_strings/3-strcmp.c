#include "holberton.h"

/**
 * _strcmp - compares two strings.
 *@s1: string 1
 *@s2: string 2
 * Return: 15 if s1 < s2,-15 s2 > s1, 0 s1 = s2.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0, r;

	while (s1[i] != '\0' && s2[i] != '\0')
		if (s1[i] != s2[i])
		{
			r = s1[i] - s2[i];
			return (r);
		}
	return (0);
}
