#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character \ should be printed
 */
void print_square(int n)
{
    int a = 0;
    int b = 0;
    
    if (n>0)
    {
    for (a=0;a<n;a++)
    {
        for (b=0;b<n;b++)
        {
            _putchar('#');
        }
        _putchar('\n');
    }
    }
    else
    {
        _putchar('\n');
    }

}
