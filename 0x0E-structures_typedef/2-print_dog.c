#include "dog.h"
/**
 * print_dog - Entry point
 *
 * Description: Prints a struct dog.
 * @d: Pointer to variable of type struct dog
 * Return: No specified return value.
 */
void print_dog(struct dog *d)
{
	if (d == 0)
	d = malloc(sizeof(struct dog));
	if (d->name == 0)
	{
	printf("Name: (nil)");
	}
	else if (d->age == 0)
	{
	printf("age: (nil)");
	}
	else if (d->owner == 0)
	{
	printf("owner: (nil)");
	}
	else
	{
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
	}
}
