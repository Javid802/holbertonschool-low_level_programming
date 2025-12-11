#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: string
 *
 * Return: the integer
 */
int _atoi(char *s)
{
    int sign = 1, num = 0, found_digit = 0;

    while (*s != '\0')
    {
        if (*s == '-' && !found_digit)
            sign = -sign;

        else if (*s >= '0' && *s <= '9')
        {
            int digit = *s - '0';

            found_digit = 1;

            /* Overflow check BEFORE multiplying by 10 */
            if (sign == 1)
            {
                if (num > (2147483647 - digit) / 10)
                    return 2147483647;
            }
            else
            {
                if (num > (2147483648u - digit) / 10)
                    return -2147483648;
            }

            num = num * 10 + digit;
        }
        else if (found_digit)
            break;

        s++;
    }

    return num * sign;
}
