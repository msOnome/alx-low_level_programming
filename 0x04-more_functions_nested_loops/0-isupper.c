#include "main.h"

/**
 * _isupper - checks if an alphabet is uppercase
 * @t - The alphabet is to be checked
 * Return : returns 1 for uppercase and 0 for lowercase
 */

int _isupper(int t)
{
	if(t >= 65 && t <= 90)
	{
        return (1);
	}
	return (0);
}
