#include "main.h"

/**
 * print_most_numbers - prints the numbers from 0 to 9, except 2 and 4,
 * followed by a new line
 */
void more_numbers(void)
{
	int a , b ;

	for (a = 0; a < 10; a++)
		for (b=0;b<14;b++)
			_putchar(b + '0');
        b=0;
    _putchar('\n');
}
