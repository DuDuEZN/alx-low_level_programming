#include "main.h"

/**
 * print_alphabet_x10 - Entry - point
 */
void print_alphabet_x10(void)
{
int i;
char s;
for (i = 1; i <= 10; i++)
{
for (s = 'a'; s <= 'z'; s++)
{
_putchar(s);
}
_putchar('\n');
}
}
