

#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse
 * @s: string to be checked
 */
void print_rev(char *s)
{
int t = 0;
while (s[t] != '\0')
{
t++;
}
for (t = t - 1; t >= 0; t--)
{
_putchar(s[t]);
}
_putchar('\n');
}
