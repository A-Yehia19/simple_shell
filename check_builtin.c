#include "shell.h"


/**
 * check_builtin - modify on tokens if builtin command
 * @tokens: array of tokens
 * @tokens_len: array of lengths array
 * @tokens_len: ength of tokens
 * Return: NONE
 */

int check_builtin(char **tokens, int *tokens_len, char *shell_name)
{
	int exit;

	exit = 1;

	if (_strcmp(tokens[0], "cd") == 0)
		exit = cd_command(*tokens_len, tokens, shell_name);

	else if (_strcmp(tokens[0], "setenv") == 0)
		exit = _setenv(tokens[1], tokens[2]);

	else if (_strcmp(tokens[0], "env") == 0)
		exit = env_command();

	return (exit);
}