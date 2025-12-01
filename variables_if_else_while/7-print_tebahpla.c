#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter1 = 'z';

	while (letter1 >= 'a')
	{
		printf("%c", letter1);
		letter1--;
	}

	printf("\n");

	return (0);
}
