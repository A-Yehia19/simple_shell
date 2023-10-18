#include "shell.h"


/**
 * main - entry point.
 * @argc: arg count
 * @argv: arg vector
 *
 * Return: 0 on success, 1 on error
 */

int main(__attribute__((unused)) int argc, char **argv)
{
	char line[BUFSIZ];
	char *tokens[BUFSIZ] = {NULL};
	int *tokens_len = malloc(sizeof(int));

	char *shell_name = argv[0];

	if (tokens == NULL || tokens_len == NULL)
		return (1);

	*tokens_len = 0;
	while (1)
	{
		_printf("($) ");
		if (get_input(line) == 1)
			continue;

		if (parse_input(line, tokens, tokens_len) == 0)
			excute_command(tokens, tokens_len, shell_name);

		clear_tokens(tokens, tokens_len);
	}

	return (0);
}
