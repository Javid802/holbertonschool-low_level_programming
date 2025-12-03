#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_diagonal(int n)
{
    int a = 0;
    int b = 0;
    for (a=0;a<n;a++)
    {
        for (b=0;b<a;b++)
        {
            _putchar(' ');
        }
        _putchar('\\');
        _putchar('\n');
    }
        
}