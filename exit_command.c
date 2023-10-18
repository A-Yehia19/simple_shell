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
	int status;

	if (tokens[1] != NULL)
		status = _atoi(tokens[1]);
	else if (end != 0)
		status = EXIT_FAILURE;
	else
		status = EXIT_SUCCESS;

	clear_tokens(tokens, tokens_len);
	exit(status);
}
