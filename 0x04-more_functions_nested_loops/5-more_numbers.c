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

		while (i <= 14)
		{
			if (i >= 10)
			{
				_putchar(i / 10 + '0');
			}
				_putchar(i % 10 + '0');
			i++;
		}
	}
	_putchar('\n');

}
