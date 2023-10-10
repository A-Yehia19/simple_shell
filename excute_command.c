#include "shell.h"


/**
 * excute_command - get line of input from stdin
 * @tokens: array of tokens
 * @tokens_len: array of token lengths
 * Return: 0 on success, 1 on error
 */

int excute_command(char **tokens, int *tokens_len)
{
	int end;

	if (*tokens_len == 0)
		return (1);

	if (_strcmp(tokens[0], "exit") == 0)
	{
		_printf("Goodbye!\n");
		clear_tokens(tokens, tokens_len);
		free(tokens_len);
		exit(0);
	}

	else
	{
		/*child process*/
		if (fork() == 0)
		{
			end = execve(tokens[0], tokens, NULL);

			if (end == -1)
				print_error();

			exit (end);
		}

		/*parent process*/
		else{
			wait(&end);
		}
	}

	return (0);
}
