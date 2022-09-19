#include "main.h"

/**
 * _strlen - returns the lenth of a strin
 * @s: string
 * Return: lenth of a string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '0')
	{
		len++;
	}
	return (len);
}
