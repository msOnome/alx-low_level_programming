#include "main.h"

/**
 * _isupper - Checks if a letter is uppercase
 * @x - The letter is to be checked
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
