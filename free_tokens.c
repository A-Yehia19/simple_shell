#include <stdlib.h>
#include "printf.h"

/**
 * clear_tokens - clear all tokens and reset tokens_len
 * @tokens: The list to clear.
 * @tokens_len: The list size.
 *
 * Return: On success length of string.
 */
int clear_tokens(char **tokens, int *tokens_len)
{
	int i;

	for (i = 0; i < *tokens_len; i++)
		free(tokens[i]);

	*tokens_len = 0;

	return (0);
}
