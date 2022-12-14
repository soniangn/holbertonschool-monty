#include "monty.h"
#include <ctype.h>

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: character
 * Return: 1 if c is not a digit, 0 otherwise
 */
int _isdigit(char *c)
{
	while (*c++ != '\0')
	{
		if (isdigit(*c) == 0)
			return (1);
	}
	return (0);
}