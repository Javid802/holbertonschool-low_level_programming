#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter1 = 'a';

	while (letter1 >= 'a')
	{
		printf("%c", letter1);
		letter1--;
	}

	printf("\n");

	return (0);
}
