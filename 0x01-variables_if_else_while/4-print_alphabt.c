#include <stdio.h>
#include <stdlib.h>
/**
 * main - returns alphabets
 * Return: 0
 */
int main(void)
{
	int ch = 'a';
	int CH = 'A';

	while (ch <= 'z')
	{
		if ((ch != 'e') && (ch != 'q'))
		{
			putchar(ch);
		}
		ch++;
	}

	putchar("\n");
	return (0);
}
