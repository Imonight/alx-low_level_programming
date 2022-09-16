#include "main.h"
/**
 * print_diagonal - diagonal lines are mad of backslashes
 * @n: number to be precise
 * Return: void
 */

void print_diagonal(int n)
{
	int i = 0, int ii;

	while (i < n && n > 0)
	{
		ii = 0;
		while (ii < i)
		{
			_putcha(' ');
			ii++;
		}

		_putchar('\\');
		_putchar('\n');
		i++;
	}
	if (i == 0)
		_putchar('\n');
}
