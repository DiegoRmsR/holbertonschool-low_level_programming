#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
/* betty style doc for function main goes there */
int main(void)
{
int n;
int puta;
srand(time(0));
n = rand() - RAND_MAX / 2;
puta = n % 10;
if (n > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, n % 10);
}
else if (puta == 0)
{
printf("Last digit of %d is %d and is 0\n", n, n % 10);
}
else
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);
}
/* your code goes there */
return (0);
}
