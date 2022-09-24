
#include "main.h"
/**
 * print_diagonal - a function that draws a diagonal line on the terminal.
 * @n: number of character
 *
 * Return: void
 */
void print_diagonal(int n)
{
int i, t;
if (n <= 0)
{
_putchar('\n');
}
for (i = 0; i < n; i++)
{
for (t = 0; t < i; t++)
{
_putchar(' ');
}
_putchar(92);
_putchar('\n');
}
}
