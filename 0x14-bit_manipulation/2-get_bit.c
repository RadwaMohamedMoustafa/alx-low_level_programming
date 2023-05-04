#include "main.h"

/**
 * get_bit - returns the value of a bit at a given
 * index.
 * @n: unsigned long int input.
 * @index: index of the bit.
 *
 * Return: value of the bit.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int div, checker;

	if (index > (sizeof(unsigned long int) * 7))
	{
		return (-1);
	}
	div = 1 << index;
	checker = n & div;
	if (checker == div)
	{
		return (1);
	}

	return (0);
}
