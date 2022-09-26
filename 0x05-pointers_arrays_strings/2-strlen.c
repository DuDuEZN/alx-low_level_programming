
#include "main.h"

/**
 * _strlen -  a function that returns the length of a string
 * @s: String to be checked
 * Return: result
 */

int _strlen(char *s)
{
int n = 0;
while (*(s + n) != '\n')
{
n++;
}
return (n);
}
