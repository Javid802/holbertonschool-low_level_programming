#include <stdio.h>

/**
 * is_prime_helper - recursively checks if a number is prime
 * @n: number to check
 * @i: current divisor to test
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_helper(int n, int i)
{
	if (n <= 1)
		return (0); /* 0 və 1 prime deyil */
	if (i == 1)
		return (1); /* heç bir bölən tapılmadı, prime-dir */
	if (n % i == 0)
		return (0); /* bölündü, prime deyil */
	return (is_prime_helper(n, i - 1));
}

/**
 * is_prime_number - returns 1 if n is prime, 0 otherwise
 * @n: number to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	return (is_prime_helper(n, n / 2));
}

