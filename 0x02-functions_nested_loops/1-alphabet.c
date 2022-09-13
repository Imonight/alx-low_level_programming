#include "main.h"
/**
 * main - entry task
 *
 * Return: 0 always (success)
 */
void print_alphabet()
{
	char c;

	for (c = 'a'; c < 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
