#include "shell.h"

/**
 * exit_command - perform buitin exit function.
 * @end: input
 * @tokens: array of tokens
 * @tokens_len: array of token lengths
 * Return: NONE
 */

void exit_command(char **tokens, int *tokens_len, int end)
{
	int status, i;
	char out[] = "./hsh: 1: exit: Illegal number: ", n;

	if (tokens[1] != NULL)
	{
		status = _atoi(tokens[1]);
		if (status == -1)
		{
			n = '\n';
			for (i = 0; tokens[1][i]; i++)
				;

			write(STDERR_FILENO, out, 32);
			write(STDERR_FILENO, tokens[1], i);
			write(STDERR_FILENO, &n, 1);
			exit(2);
		}
	}
	else
		if (end != 0)
			status = 2;
		else
			status = 0;

	clear_tokens(tokens, tokens_len);
	exit(status);
}
