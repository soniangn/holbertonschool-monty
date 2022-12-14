#include "monty.h"
#include <ctype.h>

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: character
 * Return: 1 if c is not a digit, 0 otherwise
 */
int _isdigit(char *c)
{
	int i = 0;

	for (; c[i] != '\0'; i++)
	{
		if (c[i] == '-')
			continue;
		if (isdigit(c[i]) == 0)
			return (1);
	}
	return (0);
}