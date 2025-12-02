#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: the character to check
 *
 * Return: 1 if c is a letter (lowercase or uppercase), 0 otherwise
 */
int print_sign(int n)
{
	if(n>0)
    {
        printf("+");
        return 1;

    }
    else if (n=0)
    {
        return 0;
        printf("0");       
    }
    else
    {
        return -1;
        printf("-");
    }
}
