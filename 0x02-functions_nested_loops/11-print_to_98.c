#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print all number from n to 98
 * @n: starting number
 *
 * Return: 0 Always (Success)
 */
void print_to_98(int n)
{
while (n < 98)
{
printf("%d, ", n);
n++;
}
while (n > 98)
{
printf("%d, ", n);
n--;
}
while (n == 98)
{
printf("%d", n);
}
}
