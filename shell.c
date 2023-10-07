#include "shell.h"


/**
 * main - entry point
 * @ac: arg count
 * @av: arg vector
 *
 * Return: 0 on success, 1 on error
 */

int main(__attribute__((unused)) int ac, __attribute__((unused)) char **av)
{
	char line[BUFSIZ];
	char *tokens[BUFSIZ] = {NULL};
	int *tokens_len = malloc(sizeof(int));

	if (tokens == NULL || tokens_len == NULL)
		return (1);

	*tokens_len = 0;
	while (1)
	{
		_printf("($) ");
		if (get_input(line) == 1)
			continue;

		if (parse_input(line, tokens, tokens_len) == 0)
			excute_command(tokens, tokens_len);

		clear_tokens(tokens, tokens_len);
	}

	return (0);
}
