
#include "main.h"
/**
 * more_numbers - a function that prints 10 times the numbers, from 0 to 14
 *
 * Return: void
 */

void more_numbers(void)
{
int c = 0;
for (int n = 0; n < 10; n++)
{
while (c < 15)
{
if (c > 9)
{
_putchar((c / 10) + '0');
}
_putchar((c % 10) + '0');
c++;
}
_putchar('\n');
}
}
