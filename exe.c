#include "main.h"
/**
 * _exe - execute the command
 * @cmd: command to execute
 * @argvec: argument vector
 * Return: status after executing
 */
int _exe(char **cmd, char **argvec)
{
	pid_t childProcess;
	int st;

	childProcess = fork();
	if (childProcess == 0)
	{
		if (execve(cmd[0], cmd, environ) == -1)
		{
			perror(argvec[0]);
			free_array_str(cmd);
			exit(127);
		}
	}
	else
	{
		waitpid(childProcess, &st, 0);
		free_array_str(cmd);
	}
	return (WEXITSTATUS(st));
}
