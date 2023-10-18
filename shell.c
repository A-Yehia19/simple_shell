#include "shell.h"


/**
 * main - entry point.
 * @argc: arg count.
 * @argv: arg vector
 *
 * Return: 0 on success, 1 on error
 */

int main(__attribute__((unused)) int argc, char **argv)
{
	char line[BUFSIZ];
	char *tokens[BUFSIZ] = {NULL};
	int tokens_len, end;
	char *shell_name = argv[0];

	tokens_len = 0;
	end = 0;
	if (isatty(STDIN_FILENO))
	{
		while (1)
		{
			_printf("($) ");
			if (get_input(line) == 1)
				continue;

			if (parse_input(line, tokens, &tokens_len) == 0)
				excute_command(tokens, &tokens_len, shell_name, &end);

			clear_tokens(tokens, &tokens_len);
		}
	}
	else
	{
		if (get_input(line) == 1)
			return (1);

		if (parse_input(line, tokens, &tokens_len) == 0)
			excute_command(tokens, &tokens_len, shell_name, &end);
		
		clear_tokens(tokens, &tokens_len);
	}

	return (0);
}
