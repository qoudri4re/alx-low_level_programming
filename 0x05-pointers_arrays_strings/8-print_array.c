#include <stdio.h>
#include "main.h"

/**
* print_rev - prints a string, in reverse, followed by a new line.
*@s: string to be printed in reverse
* Return: returns 0
*/
void print_array(int *a, int n){
int i = 0;
while (i < n)
{
printf("%d", a[i]);
if (i < (n - 1)
{
printf(", ");
}
i++;
}
}
