#include <string.h>
#include "main.h"

/**
* print_rev(char *s) - a function that reverses a string
*@s: string to be   reversed
* Return: returns 0
*/
void print_rev(char *s)
{
int length  = sizeof(s)/sizeof(s);
char reversed_string;
int right_index = length - 1;
int left_index = 0;
int i;
for (i = right_index; i >= left_index; i--)
{
reversed_string += s[i];
}
return(reversed_string);
}
