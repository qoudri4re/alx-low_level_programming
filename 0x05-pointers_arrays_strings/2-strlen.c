#include <string.h>
#include "main.h"

/**
*_strlen - returns the length of string
*@s: number
* Return: returns 0
*/
int _strlen(char *s)
{
  char Str[] = {*s, '\0'};
return (strlen(Str));
}
