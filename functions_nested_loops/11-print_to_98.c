#include "main.h"

/**
 * add - adds two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: sum of a and b
 */
int print_to_98(int n)
{
    if (n<0)
    {
        n=0;
    }
    if (n<=98)
    {
        for (n;n=98;n++)
        {
            _putchar(n+'0'+',\n');
        }
    }
    else 
    {
        for (n;n=98;n--)
        {
            _putchar(n+'0'+',\n');
        }

    }
}
