#include "main.h"

/**
 * print_alphabet - Entry - point
 *
 * Return: 0 Always (Success)
 */
void print_alphabet(void)
{
char s = 'a';
while (s <= 'z')
{
_putchar(s);
s++;
}
_putchar('\n');
}
