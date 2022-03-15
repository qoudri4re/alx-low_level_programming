#include <unistd.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
* _islower - checks for a lowercase character
*
* Return: returns 1 if the character is lower case and 0 otherwise
*/
int _islower(int c)
{
  if (islower(c) != 0)
  {
    return (1);
  } 
  else 
  {
    return (0);
  }
}
  
