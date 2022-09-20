#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int d = 48;
while (d < 58)
{
if (d != 57)
{
putchar(d);
putchar(',');
putchar(' ');
}
d++;
}
putchar('\n');
return (0);
}
