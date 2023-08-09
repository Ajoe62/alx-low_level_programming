#include "main.h"
#include <stdlib.h>

/**
 * str_concat - func to concatenate two strings using malloc
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *a;
	int i, j, p, d;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;

	a = malloc((i * sizeof(*s1)) + (j * sizeof(*s2)) + 1);
	if (a == NULL)
		return (NULL);

	for (p = 0, d = 0; p < (i + j + 1); p++)
	{
		if (p < i)
			a[p] = s1[p];
		else
			a[p] = s2[d++];
	}

	return (a);
}
