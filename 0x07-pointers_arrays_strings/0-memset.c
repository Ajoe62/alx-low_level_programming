#include "main.h"

/**
 * _memset - This Fills memory with a constant byte
 * @s: buffer array
 * @b: constant byte
 * @n: number of bytes of memory area to fill
 * Description: Fill the first `n` bytes of the memory area pointed to by `s`
 * with the constant byte `b`.
 * Return: Pointer to memory area `s`
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int mycount = 0;

	while (mycount < n)
	{
		s[mycount] = b;
		mycount++;
	}

	return (s);
}
