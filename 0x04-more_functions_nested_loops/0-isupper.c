#include "main.h"

/**
 * _isupper - checks if an alphabet is uppercase
 * @x - The alphabet is to be checked
 * Return : returns 1 for uppercase and 0 for lowercase
 */

int _isupper(int x)
{
	if(x >= 65 && x <= 90)
	{
        return (1);
	}
	return (0);
}
