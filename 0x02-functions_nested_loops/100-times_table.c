#include "main.h"

/** 
 * print_times_table - print n times table
 * @n: number of times table
 *
 * Return:
 */
void print_times_table(int n)
{
if (n <= 15 && n >= 0)
{
int t, i, h;
for (t = 0; t <= n; t++)
{
_putchar('0');
for (i = 1; i <= 9; i++)
{
h = t * i;
_putchar(',');
_putchar(' ');
if (h <= 9)
{
_putchar(' ');
_putchar(h + '0');
}
else
{
_putchar((h / 10) + '0');
_putchar((h % 10) + '0');
}
}
_putchar('\n');
}
}
}
