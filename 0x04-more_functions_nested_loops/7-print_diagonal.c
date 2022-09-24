
#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line on the terminal
 * @n: the number of times the character \ should be printed
 * 
 * Return: void
 */

void print_diagonal(int n)
{
int d, t;
if (n > 0)
{
for (d = 0; d < n; d++)
{
for (t = 0; t < d; t++)
{
_putchar(' ');
}
_putchar('\');
_putchar('\n');
}
}
else 
{
_putchar(''\n');
}
}
