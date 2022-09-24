
#include "main.h"
/**
 * print_square - a function that prints a square, followed by a new line.
 * @size: Number of chracter
 * Return: void;
 */
void print_square(int size)
{
int n, t;
if (size <= 0)
{
_putchar('\n');
}
for (n = 0; n < size; n++)
{
for (t = 0; t < size; t++)
{
_putchar(35);
}
_putchar('\n');
}
}
