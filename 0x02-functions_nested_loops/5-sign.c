#include <stdio.h>
/**
 *print_sign - function to check the sign of a number
 *@n is the int we use for the argument of the function
 *Return: 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
	putchar('+');
	return (1);
	}
	else if (n < 0)
	{
	putchar('-');
	return (-1);
	}
	else
	{
	putchar('0');
	return (0);
	}
}

