#include <stdio.h>

/**
 * main - proqramın adını çap edir
 * @argc: arqumentlərin sayı
 * @argv: arqumentlərin siyahısı
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
    (void)argc;      /* xəbərdarlığı aradan qaldırır */
    printf("%s\n", argv[0]);
    return 0;
}
