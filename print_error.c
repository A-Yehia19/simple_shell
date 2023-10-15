#include "shell.h"

/**
 * print_error - print error msg if something went wrong.
 *
 * Return: None
 */
void print_error(char *shell_name)
{
	_printf("%s: No such file or directory\n", shell_name);
}
