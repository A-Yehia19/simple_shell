#include "shell.h"


/**
 * excute_command - get line of input from stdin
 * @tokens: array of tokens
 * @tokens_len: array of token lengths
 * Return: 0 on success, 1 on error
 */

int excute_command(char **tokens, int *tokens_len)
{
	int end, pid;

	if (*tokens_len == 0)
		return (1);

	if (_strcmp(tokens[0], "exit") == 0)
	{
		_printf("Goodbye!\n");
		clear_tokens(tokens, tokens_len);
		free(tokens);
		free(tokens_len);
		exit(0);
	}
	
	else
	{
		pid = fork();

		/*child process*/
		if (pid == 0)
		{
			end = execve(tokens[0], tokens, NULL);

			if (end == -1)
				_printf("Unknown command: %s\n", tokens[0]);
		}

		/*parent process*/
		else{
			wait(&pid);
		}
	}

	return (0);
}
