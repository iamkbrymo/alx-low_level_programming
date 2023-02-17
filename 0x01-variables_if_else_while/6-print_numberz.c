#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints single digits from 0 to 9
 * Return: 0 (When successful)
 */
int main(void)
{
	int n;

	n = 0;

	while (n < 10)
	{
		putchar(n);
		n++;
	}

	putchar("\n");

	return (0);
}
