#include "main.h"

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
	int stat;
	(void) ac;

	while (1)
	{
		line = read_cmd();
		command = create_token(line);
		status = _exe(command, av);
	}
	return (0);
}
