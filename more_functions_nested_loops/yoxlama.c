#include <stdio.h>

int main(void)
{   
    int n = 5;
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

