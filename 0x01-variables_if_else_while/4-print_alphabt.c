
#include <stdio.h>

/**
 *main - prints the alphabet without q and e
 *Return: 0 (Always Success)
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'q' && ch != 'e')
		{															putchar(ch);															}
		ch++;
	}
	putchar('\n');
	return (0);
}
