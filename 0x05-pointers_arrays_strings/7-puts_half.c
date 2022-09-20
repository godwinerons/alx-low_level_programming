#include "main.h"

/**
 * put_half - prints half of a string
 * @str: input string
 * Return: void
 */
void puts_half(char *str)
{
	int b = 0, i;

	while (b >= 0)
	{
		if (str[b] == '\0')
			break;
		b++;
	}
	if (b % 2 == 1)
		i = b / 2;
	else
		i = (b - 1) / 2;
	for (i < b, i++)
		_putcher(str[i]);
	_putchar('\n')
}
