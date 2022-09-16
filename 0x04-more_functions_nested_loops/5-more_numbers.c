#include "main.h"
/**
 * more_numbers - print 0 - 14
 * Return: void
 */
void more_numbers(void)
{
	char n, c;
	int i = 0;

	for (n = 0; n <= 14; n++)
	{
	while (i < 10)
	{
		c = n;
		if (n > 9)
		{
			_putchar('1');
			c = n % 10;
		}
		_putchar('0' + c);
	}
	_putchar('\n');
	i++;
	}
}
