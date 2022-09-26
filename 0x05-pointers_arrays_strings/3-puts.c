
#include "main.h"

/**
 * _puts - a function that prints a string, followed by a new line
 * @str: string to be checkes
 * Return: result
 */

void _puts(char *str)
{
int n = 0;
while (n >= 0)
{
if (str[n] == '\0')
{
_putchar('\n');
}
_putchar(str[n]);
n++;
}
}
