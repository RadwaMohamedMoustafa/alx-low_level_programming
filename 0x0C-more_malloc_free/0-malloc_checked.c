#include "main.h"
/**
 * malloc_checked - Entry point
 * Description: Allocates memory using malloc
 * @b: Size of memory to be allocated
 * Return: A pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);
	if (ptr == NULL)
	exit(98);
	return (ptr);
}
