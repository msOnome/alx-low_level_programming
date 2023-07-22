#include "main.h"

/**
 * _isdigit - checks i input is a digit between 0 to 9
 * @n - number to be checked
 * Returns : returns 1 if input is digit else returns 0
 */

int _isdigit(int n)
{
	if (n >= 48 && n <= 57)
	{
	return (1);
	}
	return (0);
}
