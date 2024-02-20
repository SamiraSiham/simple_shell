#include "main.h"
/**
 * _strlen - returns the length of the given string
 * @s: the string
 * Return: length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}

/**
 * _create_array - creates an array of characters
 * @size: size of memory to allocate.
 * Return: the created array
 */

char *_create_array(unsigned int size)
{
	char *array;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);
	if (!array)
		return (NULL);
	return (array);
}

/**
 * _strdup - duplicates a given string
 * @s: the string to duplicate
 * Return: the created array
 */

char *_strdup(const char *s)
{
	char *new_str;
	int i;

	if (str == NULL)
		return (NULL);
	i = 0;
	new_str = _create_array(_strlen(str) + 1);
	if (!new_str)
		return (NULL);
	while (i <= _strlen(str))
	{
		new_str[i] = str[i];
		i++;
	}
	return (new_str);
}
