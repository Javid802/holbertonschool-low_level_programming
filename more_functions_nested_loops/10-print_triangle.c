#include "main.h"

/**
 * print_square - prints a square using the # character
 * @n: size of the square
 */
void print_triangle(int size)
{
    int count = 1;
    int spacecount = 1;
    int a;
    for (count = 1;count<=size;count++)
    {   
        
        for (spacecount=1;size-count>=spacecount;spacecount++)
        {
            printf(" ");
        }
        for (a=1;a<=count;a++)
        {
            printf("#");
        }
        printf("\n");
    }
}
