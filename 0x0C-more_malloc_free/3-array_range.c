#include <stdlib.h>
#include "main.h"
/**
  *array_range - func to create an array of integers.
  *@min: minimum value.
  *@max: maximum value.
  *
  *Return: pointer to newly created array.
  *NULL if malloc fails.
  *NULL if min > max.
  */
int *array_range(int min, int max)
{
	int range, a;
	int *p;

	range = 0;

	if (min > max)
		return (NULL);

	range = ((max + 1) - min);

	p = malloc(range * sizeof(int));

	if (p == NULL)
		return (NULL);

	for (a = 0; a < range; a++)
	{
		*(p + a) = min + a;
	}

	return (p);
}
