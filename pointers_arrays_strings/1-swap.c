#include "main.h"

/**
 * swap - takes a pointer to an int and updates the value to 98
 * @n: pointer to int
 */
void swap_int(int *a, int *b)
{
	int c = *a;
    *a = *b;
    *b = c;
}
