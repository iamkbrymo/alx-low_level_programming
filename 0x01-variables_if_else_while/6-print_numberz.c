#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main block
 * Description: prints single digits from 0 to 9
 * Return: 0 (When successful)
 */
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar(48 + n);
		n++;
	}

	putchar('\n');

	return (0);
}
