#include "main.h"

/**
 * times_table - print 9 times table
 *
 */
void times_table(void)
{
int n, i, h;
for (n = 0; n <= 9; n++)
{
_putchar('0');
for (i =1; n <= 9; n++)
{
h = n * i;
_putchar(',');
_putchar(' ');
if ( h <= 9)
{
_putchar(' ');
_putchar(h + '0');
}
else
{
_putchar((h / 10) + '0');
_putchar((h % 10) + '0');
}
_putchar('\n');
}
}
