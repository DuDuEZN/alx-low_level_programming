#include "main.h"
/**
 * print_last_digit - print last digit of a number
 * @f: the number to be checked 
 *
 * Return: value of the last digit
 */
int print_last_digit(int f)
{
int r = f % 10;
if (r < 0)
{
r = r * -1;
}
_putchar(r + '0');
return (r);
}
