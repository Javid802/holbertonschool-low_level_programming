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
        write(1,'\n',1);
    }
    write(1,&s,1);
    _puts_recursion(s + 1);

}