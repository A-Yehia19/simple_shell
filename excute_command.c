#include "shell.h"

/**
 * excute_command - get line of input from stdin.
 * @end: input
 * @tokens: array of tokens
 * @tokens_len: array of token lengths
 * @shell_name: input command
 * Return: 0 on success, 1 on error
 */

int excute_command(char **tokens, int *tokens_len, char *shell_name, int *end)
{
	int found;
	char *path = NULL;

	if (*tokens_len == 0)
		return (1);

	if (_strcmp(tokens[0], "exit") == 0)
		exit_command(tokens, tokens_len, *end);

	else if (check_builtin(tokens, tokens_len, shell_name) == 0)
		*end = 0;

	else
	{
		/*check file existence in current directory*/
		found = check_exist(tokens[0], &path);

		if (found)
		{
			/*child process*/
			if (fork() == 0)
			{
				*end = execve(path, tokens, NULL);
				exit(*end);
			}

			/*parent process*/
			else
				wait(end);
		}
		else
		{
			*end = 1;
			print_error(shell_name);
		}
	}

	free(path);
	return (0);
}
