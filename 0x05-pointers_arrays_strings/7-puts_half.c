#include <string.h>
#include "main.h"
/**
*puts_half -prints half of a string, followed by a new line.
* @str: string to print
* Return: Always 0
*/
void puts_half(char *str)
{
int length = strlen(str);
int half = length / 2 == 0
if (length % 2 == 0)
{
int i;
for (i = half; i <= length - 1; i++)
{
_putchar(str[i]);
}
}
else
{
for (i = half; i <= length - 1; i++)
_putchar(str[i]);
}
}
_putchar("\n");
}
