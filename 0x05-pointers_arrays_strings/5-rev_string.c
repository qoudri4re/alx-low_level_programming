#include <string.h>
#include "main.h"

/**
*rev_string- a function that reverses a string
*@s: string to be   reversed
* Return: returns 0
*/
void rev_string(char *s)
{
int length  = sizeof(s)/sizeof(s);
int right_index = length - 1;
int left_index = 0;
int i;
int j = 0;
for (i = right_index; i >= left_index; i--)
{
_putchar(s[i]);
s[j] = s[i];
j += 1;
}
}
