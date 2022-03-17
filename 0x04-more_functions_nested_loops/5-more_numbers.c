#include "main.h"

/**
* more_numbers- prints 10 times the numbers, from 0 to 14, followed by a new line.
*followed by a new line
* 
* Return: returns 0
*/

void more_numbers(void)
{
char c = '1';

while (c <= '10')
{
char d = '0';
while (d <= 14) 
{
_putchar(d);
d++;
}
c++;
_putchar('\n');
}
