#include "main.h"

/**
 * free_array_str - free array of string
 * @arr: array to free
 * Return: void
 */

void free_array_str(char **arr)
{
	int i;

	if (!arr)
		return;
	for (i = 0; arr[i]; i++)
	{
		free(arr[i]), arr[i] = NULL;
	}
	free(arr), arr = NULL;
}
