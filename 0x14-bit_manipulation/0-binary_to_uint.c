#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointer to a string of 0 and 1 chars.
 *
 * Return: the converted number, or 0 if there is one or more chars
 * in the string b that is not 0 or 1, or if b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	const char *ptr = b;

	if (!ptr)
	{
	return (0);
	}

	while (*ptr != '\0')
	{
	if (*ptr != '0' && *ptr != '1')
	return (0);

	num = (num << 1) + (*ptr - '0');
	ptr++;
	}

	return (num);
}