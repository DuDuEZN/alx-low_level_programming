
#include "main.h"
/**
 * more_numbers - a function that prints 10 times the numbers, from 0 to 14
 *
 * Return: void
 */

void more_numbers(void)
{
int d = 0, n;
for (n = 0; n < 10; n++)
{
while (d < 15)
{
_putchar(d + '0');
d++;
}
_putchar('\n');
}
}
