#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: pointer to string
 *
 * Return: length of the string
 */
int factorial(int n)
{
	if (n<0)
    {
        return(-1);
    }
    else if(n=0)
    {   
        return(1);
    }
    return(n*factorial(n-1));

}
