
#include <stdio.h>
/**
 * main - fizzBuzz
 * Return: 0 
 */
int main(void)
{
int n = 1;




while (n < 101)
{
if ((n % 3) == 0)
{
printf("Fizz ");
}
else if ((n % 5) == 0 && n != 100)
{
printf("Buzz ");
}
else if (n % 5 == 0 && n % 3 == 0)
{
printf("FizzBuzz ");
}
else if (n == 100)
{
printf("Buzz");
}
else
{
printf("%d ", n);
}
n++;
}
printf("\n");
return (0);
}
