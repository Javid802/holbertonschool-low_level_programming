#include <stdio.h>

/**
 * _sqrt_helper - recursively finds the natural square root
 * @n: number to find the square root of
 * @x: current guess
 *
 * Return: square root of n or -1 if none exists
 */
int _sqrt_helper(int n, int x)
{
	if (x * x > n)
		return (-1); /* no natural square root */
	if (x * x == n)
		return (x);
	return (_sqrt_helper(n, x + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to find the square root of
 *
 * Return: natural square root, or -1 if it doesn't exist
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_helper(n, 0));
}

/* Optional test */
/*
int main(void)
{
	printf("%d\n", _sqrt_recursion(25)); // 5
	printf("%d\n", _sqrt_recursion(10)); // -1
	return 0;
}
*/
