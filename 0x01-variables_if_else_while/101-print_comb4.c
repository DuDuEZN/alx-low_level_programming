#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int a = 48, b = 48, c = 48;
while (a < 58)
{
b = 48;
while (b < 58)
{
if (a != b && a < b)
{
c = 48;
while (c < 58)
{
if (b != c && b < c)
{
putchar(a);
putchar(b);
putchar(c);
if (a != 55 && b != 56 && c != 57)
{
putchar(',');
putchar(' ');
}
}
c++;
}
}
b++;
}
a++;
}
putchar('\n');
return (0);
}