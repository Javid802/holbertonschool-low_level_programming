#include <stdio.h>

/**
 * main - prints the program name
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
(void)argc; /* suppress unused parameter warning */
printf("%s\n", argv[0]);
return (0);
}
