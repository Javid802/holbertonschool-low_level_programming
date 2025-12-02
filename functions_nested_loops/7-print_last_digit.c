#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: the integer to compute
 *
 * Return: absolute value of n
 */
int print_last_digit(int n)
{   
    int last ;

    last = n%10;
    if (last<0)
    {
        last = -last
    }
    _putchar(last+'0');
    return last;
}