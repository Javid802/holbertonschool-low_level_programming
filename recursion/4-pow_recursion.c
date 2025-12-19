#include "main.h"

/**
 * factorial - returns the factorial of a number
 * @n: the number
 *
 * Return: factorial of n, -1 if n < 0
 */
int _pow_recursion(int x, int y)
{
	if (y<0)
    {
        return(-1);
    }
    if(y==0)
    {
        return(1);
    }

    return(x*_pow_recursion(x,y-1));
}
