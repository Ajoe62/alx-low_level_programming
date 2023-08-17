#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: resepresents the number of arguments
 * Return: Always 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	/* creating va_list to store the variable argument list */
	va_list my_nums;
	unsigned int mycount;
	int mysum;

	if (n == 0)
		return (0);
	mysum = 0;

	/* init valist for the number of arguments */
	va_start(my_nums, n);

	/* loop through/access all arguments stored in the valist */
	for (mycount = 0; mycount < n; mycount++)
		mysum += va_arg(my_nums, int);
	va_end(my_nums);
	return (mysum);
}
