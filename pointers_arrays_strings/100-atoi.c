#include "main.h"
#include <limits.h>

/**
 * _atoi - convert string to int safely
 * @s: string
 *
 * Return: converted integer
 */
int _atoi(char *s)
{
    int sign = 1, num = 0, found_digit = 0;

    while (*s)
    {
        if (*s == '-' && !found_digit)
            sign = -sign;
        else if (*s >= '0' && *s <= '9')
        {
            int digit = *s - '0';
            found_digit = 1;

            /* Overflow check before multiplying by 10 */
            if (sign == 1)
            {
                if (num > (INT_MAX - digit) / 10)
                    return INT_MAX;
            }
            else
            {
                if (num > (-(INT_MIN + digit)) / 10)
                    return INT_MIN;
            }

            num = num * 10 + digit;
        }
        else if (found_digit)
            break;

        s++;
    }

    return num * sign;
}
