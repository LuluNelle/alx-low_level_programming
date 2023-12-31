#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Entry point
*
* Description: Assigns a random number to the variable n and
* prints the last digit along with its characteristics.
*
* Return: Always 0 (Success)
*/
int main(void)
{
int n;
int lastDigit;

srand(time(0));
n = rand() - RAND_MAX / 2;
lastDigit = n % 10;  /* Get the last digit */

if (lastDigit > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);
}
else if (lastDigit < 6 && lastDigit != 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastDigit);
}
else
{
printf("Last digit of %d is %d and is 0\n", n, lastDigit);
}

return (0);
}
