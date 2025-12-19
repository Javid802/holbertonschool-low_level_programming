#include <stdio.h>

int main(int argc, char *argv[])
{
    (void)argv;  /* argv istifadə olunmur, xəbərdarlıq verməsin deyə */
    printf("%d\n", argc - 1);  /* proqramın adını çıxmaqla arqumentlərin sayı */
    return (0);
}
