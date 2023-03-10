#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program
 * @argc: size of arrar or number of arguments
 * @argv: array of arguments
 * Return: 0 (When Successful)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
