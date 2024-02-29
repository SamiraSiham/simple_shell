#include "main.h"
/**
 * read_cmd - read command from stdin
 * Return: line read from stdin
 */
char *read_cmd(void)
{
	char *line = NULL;
	size_t length = 0;
	int n;

	if (isatty(STDIN_FILENO))
		write(STDOUT_FILENO, "#cisfun$ ", 9);
	n = getline(&line, &length, stdin);
	if (n == -1)
	{
		free(line);
		return (NULL);
	}
	return (line);
}
