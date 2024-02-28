#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <errno.h>
#include <fcntl.h>
extern char **environ;
char *read_cmd(void);
char **split_cmd(char *);
int _exe(char **cmd, char **argvec);
void free_array_str(char **arr);
char *_create_array(unsigned int size);
char *_strdup(const char *s);
int _strcmp(char *s1, char *s2);
int _strlen(const char *s);
char *_strcat(char *dest, char *src);
char *_strcpy(char *dest, char *src);
#endif
