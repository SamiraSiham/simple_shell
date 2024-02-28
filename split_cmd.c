#include "main.h"
/**
 * split_cmd - splits the command into tokens
 * @line: the command to split
 * Return: tokens or NULL if the command is not read
 */
char **split_cmd(char *line)
{
	char *str = NULL, *tmp = NULL, **cmd = NULL;
	int count = 0, i = 0;

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
	while (str)
	{
		count++;
		str = strtok(NULL, " \t\n");
	}
	free(tmp);
	tmp = NULL;
	cmd = malloc(sizeof(char *) * (count + 1));
	if (!cmd)
	{
		free(line);
		return (NULL);
	}
	str = strtok(line, " \t\n");
	while (str)
	{
		cmd[i] = _strdup(str);
		i++;
		str = strtok(NULL, " \t\n");
	}
	free(line), line = NULL;
	cmd[i] = NULL;
	return (cmd);
}
