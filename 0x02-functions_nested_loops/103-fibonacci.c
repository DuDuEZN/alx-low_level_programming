#include <stdio.h>
/**
 * main - fibonacci
 *
 * Return: 0 Always
 */
int main(void)
{
unsigned long fib1 = 0, fib2 = 1;
unsigned long sum = 0;
while (sum <= 4000000)
{
sum = fib1 + fib2;
printf("%lu", sum);
fib1 = fib2;
fib2 = sum;
if (sum > 4000000)
{
printf("\n");
}
else
{
printf(", ");
}
}
return (0);
}
