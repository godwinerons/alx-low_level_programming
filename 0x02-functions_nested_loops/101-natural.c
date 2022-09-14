#include <stdio.h>

/**
 * main - print the sum of the multuple of 3 and 5 below 1024
 * Return: 1 (if letter)
 */
int main(void)
{
	int c = 0;
	int sum = 0;

	while (c < 1024)
	{
		if (c % 3 == 0 || c % 5 == 0)
		{
			sum += c;
		}
		c++;

	}
	return (0);
}
