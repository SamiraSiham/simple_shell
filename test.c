#include "main.h"
int main()
{
	char *str;
	char *token;

	str = _strdup("this           is\t      morocco\n");
	token = strtok(str, " \t\n");
	printf("%s\n", token);
	return (0);
}
