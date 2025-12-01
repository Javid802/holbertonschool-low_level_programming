#include <stdio.h>

/**
 * main - Prints numbers of base 16 in lowercase
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

	putchar('\n');

	return (0);
}
