#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: parameter
 * @index: index
 * Return: 1 if works, -1 if error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int k;

	if (index > 63)
		return (-1);

	k = 1 << index;

	if (*n & k)
	*n = (*n & ~k) | (~*n & k);
	return (1);
}
