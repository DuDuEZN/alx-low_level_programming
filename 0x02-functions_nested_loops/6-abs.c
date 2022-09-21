#include "main.h"
#include <stdio.h>
/**
 * _abs - compute the absolute value of an integer
 * @t: the number to be checked
 *
 * Return: t if t is greater than 0, -t otherwise
 */


int _abs(int t)
{
if (t < 0)
{
return (-t);
}
else
{
return (t);
}
}
