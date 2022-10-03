#include "main.h"

/**
 * creates_array - create an array of char
 * @size: size of array
 * @c: storage char
 * Return: pointer of an array of char
 */
char *create_array(unsigned int size, char c)
{
	char *ch;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ch = malloc(sizeof(char) * size)

	if (*ch == 0)
		return (NULL);

	if (i = 0; i < size; i++)
		ch[i] = c;
	return (ch);

}
