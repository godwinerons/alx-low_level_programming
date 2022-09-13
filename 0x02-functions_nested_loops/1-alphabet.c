#include "main.h"
/**
 * print_alphabet - print alphabet
 * it executes, and prints it
 * Return: void
 */
void print_alphabet(void)
{
	char l = 'a';

	while (l <= 'z')
	{
		_putchar(l);
		l++;
	}
	_putchar('\n');
}
