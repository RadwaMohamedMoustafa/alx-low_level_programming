#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print all possible different combinations of two digits
 *
 * Return: Always 0
 */

int main(void)
{
int x, y, z;

for (x = 0; x < 8; x++)
{
for (y = x + 1; y < 9; y++)
{
for (z = y + 1; z < 10; z++)
{
if (x < y && y < z)
{
if (x != y && y != z)
{
putchar(x + '0');
putchar(y + '0');
putchar(z + '0');
}
if (x + y + z != 24)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}

