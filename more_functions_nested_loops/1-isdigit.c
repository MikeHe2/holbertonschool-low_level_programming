#include "main.h"

/**
* _isdigit - Shows 1 if the input is a
* number. Another cases, shows 0
*
* @c: hola mun
*
* Return: 1 for lowercase. 0 for the rest.
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

