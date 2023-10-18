#include "shell.h"

/**
 * getpath - return string containing the PATH
 * @env: enviroment list.
 *
 * Return: On success length of string.
 */
char *getpath(char **env)
{
	int i;

	for (i = 0; env[i] != NULL; i++)
	{
		if (env[i][0] == 'P' && env[i][1] == 'A')
		{
			if (env[i][2] == 'T' && env[i][3] == 'H')
			{
				return (env[i]);
			}
		}
	}

	return (NULL);
}
