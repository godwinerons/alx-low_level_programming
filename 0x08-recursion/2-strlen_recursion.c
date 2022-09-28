#include "main.h"

/**
 * _strlen_recursion - print the lenght of a string
 * @s: pointer to string
 * return: recursion
 */
int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}
