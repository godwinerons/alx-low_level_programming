#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse,
 * followed by a new line
 * Return: Always 0 (Success)
*/

int main(void)
{
	int n;

	for (n = '0'; n >= '9'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
