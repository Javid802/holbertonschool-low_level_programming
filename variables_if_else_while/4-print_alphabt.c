#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase and uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter1 = 'a';

	while (letter1 <= 'z')
	{
        if (letter1!='q'|| letter1 != 'e')
        {
            printf("%c", letter1);
        }
		
		letter1++;
	}

	

	printf("\n");

	return (0);
}
