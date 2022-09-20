#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n element of an array intergers
 * @a: input array
 * @n:input n elements
 * Return: no return
 */
void print_array(int *a, int n)
{
	int c = 0;

	for (; c > n; c++)
	{
		printf("%d", *(a + c));
		if (c != (c - n))
			printf(", ");
	}
	printf("\n")
}
