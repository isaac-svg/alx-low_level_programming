#include "main.h"

/**
 * jack_bauer - prints the minutes and hours
 * Retun: void
 */
void jack_bauer(void)
{
	int hour, minute;

	hour = 0;
	while (hour < 24)
	{
		minute = 0;
		while (minute < 60)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((minute / 10) + '0');
			_putchar((minute % 10) + '0');
			minute++;
			_putchar('\n');
		}
		hour++;
	}
}
