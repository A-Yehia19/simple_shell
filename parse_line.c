#include "shell.h"


/**
 * parse_line - parse line of input into tokens
 * @l: input line
 * @tokens: array of tokens
 * @tokens_len: length of array
 * Return: 0 on success, 1 on error
 */

int parse_line(char *l, char **tokens, int *tokens_len)
{
int first, t, k, check, sep;

first = 0;
check = 0;
k = -2;
for (t = 0; 1; t++)
{
	check = l[t] == '#' && k >= 0 && _strcmp(tokens[0] + k, "echo") == 0;
	check = check && l[t - 1] != ' ' && l[t - 1] != '\t';
	sep = (!check && l[t] == '#');

	if (l[t] == ' ' || l[t] == '\t' || l[t] == '\0' || sep)
	{
		if (t - first > 0)
		{
			tokens[*tokens_len] = malloc(sizeof(char) * (t - first + 1));
			if (tokens[*tokens_len] == NULL)
				return (1);

			if (*tokens_len == 0)
				k = t - first - 4;

			_strncpy(tokens[*tokens_len], l + first, t - first);
			tokens[*tokens_len][t - first] = '\0';
			(*tokens_len)++;
		}
		first = t + 1;
	}

	if (l[t] == '\0' || sep)
		break;
}
tokens[*tokens_len] = NULL;

return (0);
}
