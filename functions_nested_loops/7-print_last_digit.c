#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: the integer to compute
 *
 * Return: absolute value of n
 */
int print_last_digit(int n)
{   
    if (n<0)
    {
        return -(n%10);
    }
    return n%10;
}