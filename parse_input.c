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
int first, t;

first = 0;
for (t = 0; 1; t++)
{
	if (l[t] == ' ' || l[t] == '\t' || l[t] == '\0' || l[t] == ':')
	{
		if (t - first > 0)
		{
			tokens[*tokens_len] = malloc(sizeof(char) * (t - first + 1));
			if (tokens[*tokens_len] == NULL)
				return (1);

			_strncpy(tokens[*tokens_len], l + first, t - first);
			tokens[*tokens_len][t - first] = '\0';
			(*tokens_len)++;
		}
		first = t + 1;
	}

	if (l[t] == '\0')
		break;
}
tokens[*tokens_len] = NULL;

return (0);
}
