#include "main.h"

/**
 * print_times_table - print n times table
 * @n: number of times table
 *
 * Return:
 */
void print_times_table(int n)
{
int t, i, h;
if (n <= 15 && n >= 0)
{
for (t = 0; t <= n; t++)
{
_putchar('0');
for (i = 1; i <= n; i++)
{
h = t * i;
_putchar(',');
_putchar(' ');
if (h <= 9)
{
_putchar(' ');
}
if (h <= 99)
{
_putchar(' ');
}
if (h >= 100)
{
_putchar((h / 100) + '0');
_putchar(((h / 10)) % 10 + '0');
}
else if (h <= 99 && h >= 10)
{
_putchar((h / 10) + '0');
}
_putchar((h % 10) + '0');
}
_putchar('\n');
}
}
}
