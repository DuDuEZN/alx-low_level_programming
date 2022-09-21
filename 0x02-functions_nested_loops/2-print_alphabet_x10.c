#include "main.h"

/**
 * print_alphabet_x10 Entry - point
 *
 * Return: 0 Always (Success)
 */
void print_alphabet_x10(void)
{
int i;
char s = 'a';
for (i = 1; i <= 10; i++)
{
while (s <= 'z')
{
_putchar(s);
s++;
}
_putchar('\n');
}
}
