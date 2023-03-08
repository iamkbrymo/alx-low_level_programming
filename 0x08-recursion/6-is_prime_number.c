#include "main.h"

/**
 * check_is_prime -> prints prime numbers
 * @n: number to check if prime
 * @i: iterator
 * Return: 1 if prime and 0 if not prime
 */

int check_is_prime(int n, int i)
{
	if (i < n)
	{
		if ((n % i) == 0)
			return (0);
	}
	return (check_is_prime(n, (i + 1)));
}

/**
 * is_prime_number -> prints prime number
 * @n: number to check if prime
 * Return: 1 if prime and 0 if not prime
 */

int is_prime_number(int n)
{
	int check = 1;

	if (n <= 1)
		return (0);
	else if (n == 2)
		return (1);

	check = check_is_prime(n, 2);
	if (check == 0)
		return (0);
	else
		return (1);
}
