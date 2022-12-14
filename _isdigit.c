#include "monty.h"
#include <limits.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>
/**
 *_isdigit - check the code
 *@c: the character to check
 *Return: 1 if c is digit, 0 otherwise
 */

int _isdigit(char *c)
{
	while (*c)
	{
		if (isdigit(*c++) == 0)
			return (1);
	}
	return (0);
}
