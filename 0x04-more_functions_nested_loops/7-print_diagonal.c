#include "main.h"

/**
* print_diagonal - draws a diagonal line on the terminal.
* @n: number of lines
* Return: returns 0
*/

void print_diagonal(int n)
{
  int i;
  for (i = 0; i < n; i++)
  {
    _putchar('\\');
  }
  _putchar('\n');
}
