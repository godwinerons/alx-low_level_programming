#include "main"
/**
 * print_alphabet_x10 - print alphabet 10 times
 * 
 * Return: void
 */
void print_alphabet_x10(void)
{
	int r = 0;
	char l = 'a';

	while(r < 10)
	{
		l = 'a';
		while(l <= 'z')
		{
			_putchar(l);
			l++;
		}
		_putchar('\n');

		r++;
	}
}
