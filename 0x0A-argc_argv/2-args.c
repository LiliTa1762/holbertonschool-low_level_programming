#include <stdio.h>
#include "holberton.h"
/**
 *main - function
 *@argc: counter
 *@argv: vector
 *Return: 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	int counter;

	for (counter = 0; argv[counter] != '\0'; counter++)
		printf("%s\n", argv[counter]);
	return (0);
}
