#include "main.h"

/**
 * puts2 - prints one char out of 2 of a string
 * @str: the char array string type
 * Description: to Print 1st char, then 3rd, then 5th, etc..
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
