#include "main.h"

/**
 * factorial - print factorial of n
 * @n: integer aram
 * Return: recursion
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
