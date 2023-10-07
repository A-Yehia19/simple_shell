#include "shell.h"


/**
 * excute_command - get line of input from stdin
 * @tokens: array of tokens
 * @tokens_len: array of token lengths
 * Return: 0 on success, 1 on error
 */

int excute_command(char **tokens, int *tokens_len)
{
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
		_printf("Unknown command: %s\n", tokens[0]);

	return (0);
}
