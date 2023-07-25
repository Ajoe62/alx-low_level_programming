#include "main.h"

/**
 * puts_half -this  print second half of a string
 * @str: char array string type
 * Description: If odd num of chars, print (length - 1) / 2
 */

void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;

	i++;
	for (i /= 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
