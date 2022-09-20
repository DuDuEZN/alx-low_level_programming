#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int g = 48;
char j = 'a';
while (g < 58)
{
putchar(g);
g++;
}
while (j <= 'f')
{
putchar(j);
j++;
}
putchar('\n');
return (0);
}
