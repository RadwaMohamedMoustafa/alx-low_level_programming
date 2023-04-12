#include "main.h"

/**
 * *create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: size of the array to create
 * @c: char to initialize the array c
 *
 * Return: pointer to the array (Success), NULL (Error)
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)

		return (NULL);


	arr = (char *) malloc(sizeof(char) * size);
	if (arr == NULL)

		return (NULL);

	for (i = 0; i < size; i++)

		*(arr + i) = c;

	*(arr + i) = '\0';

	return (arr);
}
