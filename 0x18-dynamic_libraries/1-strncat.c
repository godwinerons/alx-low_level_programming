#include "main.h"

/**
 * _strncat - concatenates two strings but will use at mose the n byte
 * @dest: destination
 * @src: source
 * @n: amount of byte used from source scr
 * Return: the pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a = 0, b = 0;

	while (*(dest + a) != '\0')
	{
		a++;
	}
	while (b < n)
	{
		*(dest + a) = *(src + b);
		if (*(src + b) == '\0')
			break;
		a++;
		b++;
	}
	return (dest);
}
