#include "main.h"

/**
 * _isalpha - check for alphabetic
 *
 * Return: 1 if c is uppercas or lowercase
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
