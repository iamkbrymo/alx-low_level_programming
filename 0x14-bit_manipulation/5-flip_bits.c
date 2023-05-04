#include "main.h"

/**
 * flip_bits - returns the number of bits you would need
 * to flip to get from one number to another.
 * @n: number
 * @m: another number
 *
 * Return: number of bits flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int exor = n ^ m, bit_s = 0;

	while (exor > 0)
	{
		bit_s += (exor & 1);
		exor >>= 1;
	}

	return (bit_s);
}
