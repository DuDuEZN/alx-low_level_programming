#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - print last digit of a number
 * 
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
_putchar('0' + r);
return (r);
} 
