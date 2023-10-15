#include "shell.h"

/**
 * env_command - perform buitin env function
 *
 * Return: 0 on success, 1 on error
 */

int env_command(void)
{
	int i;

	for (i = 0; environ[i] != NULL; i++)
	{
		_printf("%s\n", environ[i]);
	}

	return (0);
}
