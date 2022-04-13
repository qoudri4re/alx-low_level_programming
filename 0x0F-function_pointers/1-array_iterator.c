#include "function_pointers.h"
#include <stddef.h>
/**
* array_iterator - a function that executes a function
* given as a parameter on each element of an array.
* @array : the array
* @size : size of the array
* @action : pointer to a function
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
if (array && size && action)
{
unsigned int i;
for (i = 0; i < size; i++)
{
(*action)(array[i]);
}
}
}
