#include "shell.h"
/**
 * main - entry point.
 * @argc: arg count.
 * @argv: arg vector
 * Return: 0 on success, 1 on error
 */
int main(__attribute__((unused)) int argc, char **argv)
{
	char line[BUFSIZ];
	char *tokens[BUFSIZ] = {NULL};
	int tokens_len, end;
	char *shell_name = argv[0];
	int command_num, sep[BUFSIZ] = {0}, i;

	tokens_len = 0;
	end = 0;
	if (isatty(STDIN_FILENO))
	{
		while (1)
		{
			_printf("($) ");
			if (get_input(line) == 1)
				continue;
			command_num = count_commands(line, sep);
			for (i = 0; i < command_num; i++)
			{
				if (parse_input(line + sep[i], tokens, &tokens_len) == 0)
					excute_command(tokens, &tokens_len, shell_name, &end);
				clear_tokens(tokens, &tokens_len);
			}
		}
	}
	else
	{
		if (get_input(line) == 1)
			return (1);
		command_num = count_commands(line, sep);
		for (i = 0; i < command_num; i++)
		{
			if (parse_input(line + sep[i], tokens, &tokens_len) == 0)
				excute_command(tokens, &tokens_len, shell_name, &end);
			clear_tokens(tokens, &tokens_len);
		}
	}
	return (0);
}
