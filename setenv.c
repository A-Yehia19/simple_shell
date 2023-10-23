#include "shell.h"

/**
 * _setenv - add or update enviroment variable.
 * @variable: enviroment variable.
 * @value: value of variable.
 *
 * Return: On success 0.
 */
int _setenv(char *variable, char *value)
{
	setenv(variable, value, 1);
	return (0);
}
