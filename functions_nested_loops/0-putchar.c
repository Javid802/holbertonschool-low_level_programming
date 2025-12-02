#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: Prints "_putchar" followed by a new line
 * Return: 0
 */
int main(void)
{
    write(1, "_putchar\n", 9);

    return 0;
}
