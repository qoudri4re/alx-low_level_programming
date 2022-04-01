#include <stdlib.h>
#include <stdio.h>
/**
* main -  a program that multiplies two numbers
* @argc: offset count
* @argv: offset value
* Return: 0
*/
int main(int argc, char* argv[])
{
  if (argc > 2)
  {
    int i, mul = 0;
    for (i = 0; i < argc; i++)
    {
      mul *= atoi(argv[i]);
    }
    printf("%d\n", mul);
    return(0)
  }
  else
  {
    printf("Error\n");
    return (1);
  }
}