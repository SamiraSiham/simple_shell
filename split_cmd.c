#include "main.h"
/**
 * split_cmd - splits the command into tokens
 * @line: the command to split
 * Return: tokens or NULL if the command is not read
 */
char **split_cmd(char *line)
{
	char *str = NULL, *tmp = NULL, **cmd = NULL;

	if (!line)
		return (NULL);
	tmp = _strdup(line);
	str = strtok(tmp, " \t\n");
	if (str == NULL)
	{
		free(line), line = NULL;
		free(tmp), tmp = NULL;
		return (NULL);
	}
	cmd = malloc(sizeof(char *) * 10);
	if (!cmd)
	{
		free(line);
		return (NULL);
	}
	str = strtok(line, " \t\n");
	cmd[0] = _strdup(str);
	free(line), line = NULL;
	cmd[0] = NULL;
	return (cmd);
}
