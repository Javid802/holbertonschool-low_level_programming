#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter1 = 'a';
    char letter2 = 'A';

	while (letter1 <= 'z')
	{
		printf("%c", letter1);
		letter1++;
	}

    while (letter2 <= 'Z')
	{
		printf("%c", letter2);
		letter2++;
	}
    
	printf("\n");

	return (0);
}
