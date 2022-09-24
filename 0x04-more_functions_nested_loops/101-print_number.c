
#include "main.h"

/**
 * print_number - print an integer
 * @n: int to be printed
 * Return: 0
 */

void print_number(int n)
{
unsigned int num = n;


if (n < 0)
{
_putchar('-');
num = -num;
}
if (num > 9)
{
print_number(num / 10);
}
_putchar(num % 10 + '0');
}
