#include "main.h"

/**
 * more_numbers - Print numbers between 0 to 14 incl.
 *
 * Return: Void.
 */

void more_numbers(void)
{
	int i;
	int x;

	for (i = 0; i < 10; i++)
	{
		x = 0;
		while (x <= 14)
		{
			if (x >= 10)
			{
				_putchar(x / 10 + '0');
			}
				_putchar(x % 10 + '0');
			x++;
		}
	}
	_putchar('\n');

}
