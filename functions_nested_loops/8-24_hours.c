#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 */
void jack_bauer(void)
{
    int hour, minutes;

    for (hour = 0; hour < 24; hour++)
    {
        for (minutes = 0; minutes < 60; minutes++)
        {
            printf("%02d:%02d\n", hour, minutes);
        }
    }
}
