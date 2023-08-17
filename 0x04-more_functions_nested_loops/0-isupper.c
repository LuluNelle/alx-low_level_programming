#include "main.h"
#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
char letter;

letter = 'F';
printf("%c: %d\n", letter, _isupper(letter));

letter = 'g';
printf("%c: %d\n", letter, _isupper(letter));

return (0);
}
