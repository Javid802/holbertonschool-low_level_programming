#include "main.h"
#include <stdint.h>
#include <limits.h>

/**
 * _atoi - convert string to int safely
 * @s: string
 *
 * Return: converted integer
 */
int _atoi(char *s)
{
    int sign = 1, found_digit = 0;
    int64_t num = 0;  /* daha geniş tip ilə işləyirik */

    while (*s)
    {
        if (*s == '-' && !found_digit)
            sign = -sign;
        else if (*s >= '0' && *s <= '9')
        {
            int digit = *s - '0';
            found_digit = 1;

            num = num * 10 + digit;  /* int64_t olduğu üçün overflow yoxdur */
        }
        else if (found_digit)
            break;

        s++;
    }

    /* INT_MIN / INT_MAX ilə uyğunlaşdır */
    if (sign == 1 && num > INT_MAX)
        return INT_MAX;
    else if (sign == -1 && -num < INT_MIN)
        return INT_MIN;

    return (int)(sign * num);
}
