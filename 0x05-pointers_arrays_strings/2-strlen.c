#include "main.h"

/**
 * _strlen - this prog returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of string
 */

int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
