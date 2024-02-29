#include "shell.h"

/**
 * main - simple shell entry point
 * @ac: argument count
 * @av: argument vector
 * Return: 0 on success
 */

int main(int ac, char **av)
{
	char *line = NULL;
	char **command = NULL;
	int stat = 0;
	(void) ac;

	while (1)
	{
		line = read_cmd();
		if (line == NULL)
		{
			if (isatty(STDIN_FILENO))
				write(STDOUT_FILENO, "\n", 1);
			return (stat);
		}
		command = split_cmd(line);
		if (!command)
		{
			continue;
		}
		stat = _exe(line, av);
	}
	return (0);
}
