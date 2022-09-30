#include <stdio.h>
/**
 * main - print the number of argument passed into it
 * @argc: number of command line argument
 * @argv: array that contains the program command line argument
 * Return: 0 -success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
