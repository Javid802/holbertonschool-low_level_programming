#include <stdio.h>

/**
 * main - Prints numbers from 0 to 9
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int letter1 = 0;

	while (letter1 <= 9)
	{
		printf("%i", letter1);
		letter1++;
	}

	printf("\n");

	return (0);
}
