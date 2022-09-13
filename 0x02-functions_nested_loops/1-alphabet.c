#include "main.h"
/**
 * main - assigns a random number to int n everytime
 * it executes, and prints it
 * Return: 0;
 */
void print_alphabet(void)
{
	char l = 'a';
	while (l<= 'z')
	{
		putchar(l);
		l++;
	}
	putchar('\n');
}
int main(void)
{
	print_alphabet();
	return (0);
}

