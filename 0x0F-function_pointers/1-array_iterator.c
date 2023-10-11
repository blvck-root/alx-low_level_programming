#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - execute function given as parameter on each array element
 * @array: array of integers
 * @size: size of the array
 * @action: pointer to function
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (action != NULL && size > 0 && array != NULL)
	{
		for (i = 0; i < (int)size; i++)
		{
			action(array[i]);
		}
	}
}
