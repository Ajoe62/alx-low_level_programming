#include "main.h"

/**
 * is_prime_number - To determine if a number is a prime number
 * @n: int number
 * Return: 1 if prime, 0 if  otherwise
 */

int is_prime_number(int n)
{
	int prime_number(int divider, int n);

	int divider = 2;

	if (n < 2)
	{
		return (0);
	}
	if (n % n == 0 || n % 1 == 0)
	{
		if (prime_number(divider, n) != 0)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}

/**
 * prime_number - helper function, recursive steps taken
 * @n: number given to original function is_prime_number
 * @divider: incrementer divisor
 * Return: 1 if prime and 0 if otherwise
 */

int prime_number(int divider, int n)
{
	if (divider < n)
	{
		if (n % divider == 0)
		{
			return (0);
		}
		else
		{
			++divider;
			return (prime_number(divider, n));
		}
	}
	else
	{
		return (1);
	}
}
