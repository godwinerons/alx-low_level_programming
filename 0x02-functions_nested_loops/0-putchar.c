#include <stdio.h>
/**
 *  * main - assigns a random number to int n everytime
 *   * it executes, and prints it
 *    * Return: 0;
 *     */
int main(void)
{
	char text[9] = "_putcher";
	int i = 0;
	
	for (i = 0; i < 8; i++)
	{
		_putchar(text[i]);
	}
	_putchar('\n');
	return (0);
}

