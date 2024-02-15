#include "main.h"
/**
 * read_cmd - read command from stdin
 * Return: line read from stdin
 */
char *read_cmd(void)
{
	char *line = NULL;
	size_t length = 0;
	size_t n;

	n = getline(&line, &length, stdin);

	return (line);
}
