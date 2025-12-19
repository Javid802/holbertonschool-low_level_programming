#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

void _puts_recursion(char *s)
{
    if(*s=='\0')
    {
        putchar('\n');
    }
    write(1,&s,1);
    _puts_recursion(s + 1);

}