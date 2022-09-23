
#include "main.h"
/**
 * print_most_numbers - a function that prints the numbers, from 0 to 9
 *
 * Return: void
 */
void print_most_numbers(void)
{
int d = 0;
while (d < 10)
{
if (d != 2 && d != 4)
{
_putchar(d + '0');
}
d++;
}
_putchar('\n');
}
