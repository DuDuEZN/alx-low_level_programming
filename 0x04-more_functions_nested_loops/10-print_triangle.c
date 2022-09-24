
#include "main.h"
/**
 * print_triangle - a function that prints a triangle
 * @size: number of duplication
 * Return: void
 */

void print_triangle(int size)
{
int n, t;

for (n = 0; n < size; n++)
{
for (t = 1; t < (size -n); t++)
{
_putchar(' ');
}
for (t--; t < size; t++)
{
_putchar(35);
}
if (n < (size -1))
{
_putchar('\n');
}
}
_putchar('\n');
}
