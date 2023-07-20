#include "main.h"

/**
* _isupper - checks if parameter is an uppercase character
* @c: function parameter
* Return: 1 on success 0 on failure
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'z')
		return (1);
	else
		return (0);
}
