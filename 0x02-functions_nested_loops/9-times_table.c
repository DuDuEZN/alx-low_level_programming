#include "main.h"

/**
 * times_table - print 9 times table
 *
 */
void times_table(void)
{
int n, i;
for (n = 0; n <= 9; n++)
{
for (i = 0; i <= 9; i++)
{
_putchar(n * i);
if (i == 9)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
