#include "main.h"

/**
 * flip_bits - Counts the number of bits needed to be flipped.
 * @n: The number.
 * @m: The number to flip n to.
 *
 * Return: The number of bits to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int exor = n ^ m, num = 0;

	while (exor > 0)
	{
		num += (exor & 1);
		exor >>= 1;
	}

	return (num);
}
