#include "shell.h"

/**
 * getpath - return string containing the enviroment unit
 * @env: enviroment list.
 * @str: unit to get
 *
 * Return: On success retutn enviroment unit.
 */
char **get_env(char **env, char *str)
{
	int i;

	for (i = 0; env[i] != NULL; i++)
	{
		if (_strcmpn(env[i], str) == 0)
			return (&env[i]);
	}

	return (NULL);
}
