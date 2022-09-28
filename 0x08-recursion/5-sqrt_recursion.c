#include "main.h"

/**
 * _sqrt_recursion - print square root of a number
 * @n: integer n
 * Return: int
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
/**
 * _sqrt - _sqrt_recursion
 * @n: integer paeameter
 * @i: integer paramtr
 * Return: sqrt
 */
int _sqrt(int n, int m)
{
	if (n < 0)
	{
		return (-1);
	}
	if (m * m > n)
		return (-1);
	if (m * m == n)
		return (m);
	return (_sqrt(n, m + 1));
}
