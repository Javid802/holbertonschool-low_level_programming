#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: pointer to the string
 *
 * Return: length of the string
 */
int _strcmp(char *s1, char *s2)
{
	
    while(*s1 && *s2 && s1==s2)
    {
        s1++;
        s2++;
    }
    return(*s1-*s2);
}
