#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <limits.h>
#include <fcntl.h>
#include <errno.h>
#include <sys/wait.h>

char* shell_name;
extern char **environ;

int _printf(const char *format, ...);
int _strcmp(char *str1, char * str2);
int _strncpy(char *dest, char *src, int len);
int _strcpy(char *dest, char *src);
int _assignstr(char **dest, char *src);
int _atoi(char *str);
int _pow(int base, int power);

void print_error();
int clear_tokens(char **tokens, int *tokens_len);
int get_input(char *line);
int parse_input(char *line, char **tokens, int *tokens_len);
int excute_command(char **tokens, int *tokens_len);
char *getpath(char **env);
int check_exist(char *command, char **path);
char *create_path(char *dir, char *program);
void exit_command(char **tokens, int *tokens_len);
int env_command();

#endif
