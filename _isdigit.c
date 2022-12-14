#include "monty.h"
#include <limits.h>
/**
 *_isdigit - check the code
 *@c: the character to check
 *Return: 1 if c is digit, 0 otherwise
 */

int _isdigit(char *c)
{
	while (*c++ != '\0')
	{
		if (!(*c >= '0' && *c <= '9'))
			return (1);
	}
	return (0);
}
