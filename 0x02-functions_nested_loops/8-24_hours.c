#include "main.h"
/**
 *jack_bauer - every minute of the day of Jack Bauer,
 *starting from 00:00 to 23:59.
 */

void jack_bauer(void)
{
	int hours, minutes;

	for (hours = 0; hours < 24; hours++)
	{
		for (minutes = 0; minutes < 60; minutes++)
		{

			_putchar((hours / 10) + '0');
			_putchar((hours % 10) + '0');
			_putchar(58);
			_putchar((minutes / 10) + '0');
			_putchar((minutes % 10) + '0');
			if (hours + minutes != 82)
			{
				_putchar('\n');
			}
		}
	}
	_putchar('\n');
}
