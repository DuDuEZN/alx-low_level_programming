
#include <stdio.h>
/**
 * main - print Fizz-Buzz
 *
 * Return: 0 Always
 */
int main(void)
{
int n =1;
while (n < 101)
{
if ((n % 3) == 0)
{
printf('Fizz');
}
else if ((n % 5) == 0)
{
printf('Buzz');
}
else if ((n % 3) == 0 && (n % 5) == 0)
{
printf('FizzBuzz');
}
else
{
printf("%d", n);
}
n++;
}
return (0);
}
