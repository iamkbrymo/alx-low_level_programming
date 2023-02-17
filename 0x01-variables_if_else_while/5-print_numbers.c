#include <stdio.h>
#include <stdlib.h>
/**
 * main - function that prints a ll intergers from 0 to 10
 * Return: 0 (Successful)
 */
int main(void)
{
	int n;

	n = 0;

	while (n < 10)
	{
		printf("%i", n);
		n++;
	}
	printf("\n");
	return (0);
}
