#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Description: prints the number of arguments
 * @argc: the number of arguments passed
 * @argv: array of arguments
 * Return: the number of arguments
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
