
#include "main.h"

/**
 * print_line - a function that draws a straight line in the terminal.
 * @n: number of repetition
 *
 * Return: result
 */

void print_line(int n)
{
int d;
if (n > 0)
{
for (d = 0; d < n; d++)
{
_putchar('_');
}
}
_putchar('\n');
}
