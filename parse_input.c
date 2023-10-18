#include "shell.h"


/**
 * parse_input - parse line of input into tokens
 * @l: input line
 * @tokens: array of tokens
 * @tokens_len: array of token lengths
 * Return: 0 on success, 1 on error
 */

int parse_input(char *l, char **tokens, int *tokens_len)
{
	int first, last;

	first = 0;
	for (last = 0; 1; last++)
	{
		if (l[last] == ' ' || l[last] == '\t' || l[last] == '\0' || l[last] == ':' || l[last] == '#')
		{
			if (last - first > 0)
			{
				tokens[*tokens_len] = malloc(sizeof(char) * (last - first + 1));
				if (tokens[*tokens_len] == NULL)
					return (1);

				_strncpy(tokens[*tokens_len], l + first, last - first);
				tokens[*tokens_len][last - first] = '\0';
				(*tokens_len)++;
			}
			first = last + 1;
		}

		if (l[last] == '\0' || l[last] == '#')
			break;
	}
	tokens[*tokens_len] = NULL;

	return (0);
}
