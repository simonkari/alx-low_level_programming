#include <stdio.h>
#include <math.h>

/**
 * main - print the largest prime factor of 6127852475143
 * Return: Always (0)
*/

int main(void)
{
long x, maxf;
long number = 612852475243;
double square = sqrt(number);

for (x = 1; x <= square; x++)
{
if (number % x == 0)
{
maxf = number / x;
}
}
printf("%ld\n", maxf);
return (0);
}
