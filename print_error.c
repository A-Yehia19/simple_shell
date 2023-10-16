#include "shell.h"

/**
 * print_error - print error msg if something went wrong.
 * @shell_name: input command
 * Return: None
 */
void print_error(char *shell_name)
{
	_printf("%s: No such file or directory\n", shell_name);
}
