#include "main.h"
/**
 * _islower - checks if character is lowercase
 * @c: is the character to be checked
 * Return: 1 i character is lower case, else 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
