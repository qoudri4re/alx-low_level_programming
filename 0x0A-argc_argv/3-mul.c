#include <stdlib.h>
#include <stdio.h>
/**
* main -  a program that multiplies two numbers
* @argc: offset count
* @argv: offset value
* Return: 0
*/
int main(int argc, char *argv[])
{
if (argc > 2)
{
int i, mul = 1;
for (i = 0; i < argc; i++)
{
  printf("mul=%d-- argv[%d]=%s", mul, i, argv[i]);
mul *= atoi(argv[i]);
}
  printf("Here");
printf("%d\n", mul);
}
else
{
printf("Error\n");
return (1);
}
}
