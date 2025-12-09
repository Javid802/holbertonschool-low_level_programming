#include "main.h"

/**
 * print_rev - prints a string in reverse followed by a new line
 * @s: pointer to the string
 */
void rev_string(char *s)
{
	int a = 0;
    int b = 0;
    char temporary;
    

	while (s[a] != '\0')
	{
		a++;
	}
    a--;
    while (b<a)
    {
        temporary = s[b];
        s[b] = s[a];
        s[a] = temporary;
        b ++;
        a--;

    }

}
