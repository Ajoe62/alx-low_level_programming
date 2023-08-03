#include "main.h"

/**
 * _strlen_recursion - Prog to return length of a string
 * @s: string
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	int mycount;

	if (*s == '\0')
		return (0);

	mycount = 1 +  _strlen_recursion(s + 1);

	return (mycount);
}
