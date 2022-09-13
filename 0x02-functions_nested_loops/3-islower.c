#include "main.h"
/**
 *_islower - function to check lowercase character
 *
 * Return: 0 always (success)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
