#include <stdio.h>

/**
 * main - Prints numbers from 0 to 9
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int letter1 = 0;
    char letter2 = 'a';

	while (letter1 <= 9)
	{
		putchar(letter1 + '0');
		letter1++;
	}
    while (letter2 <= 'f')
	{
		putchar(letter2);
		letter2++;
	}

	printf("\n");

	return (0);
}
