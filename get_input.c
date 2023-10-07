#include "shell.h"


/**
 * get_input - get line of input from stdin
 * @line: line of input
 * Return: 0 on success, 1 on error
 */

int get_input(char line[])
{
	int len;

	len = read(STDIN_FILENO, line, BUFSIZ);
	if (len == -1)
		return (1);

	if (line[len - 1] == '\n')
		line[len - 1] = '\0';

	if (line[0] == '\0')
		return (1);

	return (0);
}
