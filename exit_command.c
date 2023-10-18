#include "shell.h"

/**
 * exit_command - perform buitin exit function.
 * @tokens: array of tokens
 * @tokens_len: array of token lengths
 * Return: NONE
 */

void exit_command(char **tokens, int *tokens_len)
{
	int status;

	if (tokens[1] != NULL)
		status = _atoi(tokens[1]);
	else
		status = 0;

	clear_tokens(tokens, tokens_len);
	free(tokens_len);
	exit(status);
}
