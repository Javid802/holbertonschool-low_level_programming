#include <stdio.h>

int main(int argc, char *argv[])
{
    (void)argc;      // xəbərdarlığı aradan qaldırır
    printf("%s\n", argv[0]);
    return 0;
}
