
#include <stdio.h>
/**
 * main - list all natural number 
 * 
 * Return: Always 0
 */
int main(void)
{
int n, h;
for (n = 0; n <= 1024; n++)
{
if ((n % 3) == 0 || (n % 5) == 0)
{
h = h + n;
}
}
printf("%d\n", h);
return (0);
}
