#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program
 * @argc: size of array or number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (When Successful)
 */

int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);

	return (0);
}
