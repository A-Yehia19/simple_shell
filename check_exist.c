#include "shell.h"

/**
 * check_exist - chwck if program is found in enviroment
 * @command: the program name
 * @absolute_path: the full path of program if found
 * Return: 1 on success and the path in absolute path, 0 on error
 */

int check_exist(char *command, char **absolute_path)
{
	int *path_len = malloc(sizeof(int)), i, found;
	struct stat buffer;
	char cwd[BUFSIZ], *path = NULL;
	char *path_tokens[BUFSIZ] = {NULL};

	found = 0;
	*path_len = 0;
	*absolute_path = NULL;

	getcwd(cwd, BUFSIZ);
	path = getpath(environ);
	parse_input(path + 5, path_tokens, path_len);

	/*check if command is absolute path*/
	if (command[0] == '/' || command[0] == '.')
	{
		chdir(command);
		if (stat(command, &buffer) == 0)
		{
			found = 1;
			*absolute_path = command;
		}
		chdir(cwd);
	}

	for (i = 0 ; i <= *path_len && !found; i++){
		if (stat(command, &buffer) == 0)
		{
			found = 1;
			*absolute_path = create_path(getcwd(NULL, 0), command);
			if (*absolute_path == NULL)
				found = 0;
			break;
		}

		if (path_tokens[i] != NULL)
			chdir(path_tokens[i]);
	}

	chdir(cwd);
	clear_tokens(path_tokens, path_len);
	free(path_len);
	return (found);
}
