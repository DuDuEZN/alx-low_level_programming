#include "main.h"
/**
 * main - Write my own program _putchar
 *
 * Return: 0 (Success)
 */
int main(void)
{
char s[] = "_putchar";
int i = 0;
while (s[i] != '\0')
{
_putchar(s[i]);
i++;
}
_putchar('\n');
return (0);
}
