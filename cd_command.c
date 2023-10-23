#include "shell.h"

/**
 * main - cd command.
 * @argc: arg count.
 * @argv: arg vector
 * argv last item is the shellname
 * Return: 0 on success, 1 on error
 */

int cd_command(int argc, char **argv, char *shell_name)
{
	char *HOME, *cwd;
	_printf("cd\n");

	if (argc == 1)
	{
		HOME = *get_env(environ, "HOME") + 5;
		if (HOME == NULL)
		{
			_printf("%s: cd: HOME: No such file or directory\n", shell_name);
			return (1);
		}
		chdir(HOME);
	}
	else if(argc == 2)
	{
		if (chdir(argv[1]))
		{
			_printf("%s: cd: %s: No such file or directory\n", shell_name, argv[1]);
			return (1);
		}
	}
	else
	{
		_printf("%s: cd: too many arguments\n", shell_name);
		return (1);
	}

	cwd = getcwd(NULL, 0);
	_setenv("PWD", cwd);
	free(cwd);
	return (0);
}
