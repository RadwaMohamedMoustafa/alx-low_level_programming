#include "main.h"

/**
 * set_bit - Entry point
 *
 * Description: Sets the bit at a given index
 * @n: pointer of an unsigned long int
 * @index: index of the bit
 * Return: 1 if successful, -1 if not
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int num;

	if (index > (sizeof(unsigned int) * 7))
	{
		return (-1);
	}
	num = 1 << index;
	*n = *n | num;
	return (1);
}
