#include "shell.h"


/**
 * parse_input - parse line of input into tokens
 * @line: input line
 * @tokens: array of tokens
 * @tokens_len: array of token lengths
 * Return: 0 on success, 1 on error
 */

int parse_input(char *line, char **tokens, int *tokens_len)
{
	int first, last;

	first = 0;
	for (last = 0; 1; last++)
	{
		if (line[last] == ' ' || line[last] == '\0' || line[last] == '\t')
		{
			if (last - first > 0)
			{
				tokens[*tokens_len] = malloc(sizeof(char) * (last - first + 1));
				if (tokens[*tokens_len] == NULL)
					return (1);

				_strncpy(tokens[*tokens_len], line + first, last - first);
				tokens[*tokens_len][last - first] = '\0';
				(*tokens_len)++;
			}
			first = last + 1;
		}

		if (line[last] == '\0')
			break;
	}
	tokens[*tokens_len] = NULL;

	return (0);
}
