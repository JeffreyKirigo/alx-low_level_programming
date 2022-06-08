#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 *
 * Return: 00:00 to 23:59
 *
 */
void jack_bauer(void)
{
	int hours1, hours2 , min1, min2 , hours_max;

	hours2 = 0;
	while (hours2 <= 2)
	{
		if (hours2 == 2)
		{
			/*max hours = 23*/
			hours_max = 3;
		}
		hours1 = 0;
		while (hours1 <= hours_max)
		{
			min2 = 0;
			while (min2 <= 5)
			{
				min1 = 0;
				while (min1 <= 9)
				{
					_putchar('0' + hours2);
					_putchar('0' + hours1);
					_putchar(':'); /*separator*/
					_putchar('0' + min2);
					_putchar('0' + min1);
					_putchar('\n');
					min1++;
				}
				min2++;
			}
			hours1++;
		}
		hours2++;
	}
}
