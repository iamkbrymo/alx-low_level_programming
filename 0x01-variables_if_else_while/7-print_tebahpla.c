#include <stdio.h>
#include <stdlib.h>
/**
 * main - returns alphabets from z to a
 * Return: 0 (Successful)
 */
int main(void)
{
	int ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}

	putchar("\n");
	return (0);
}
