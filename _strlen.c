#include "shell.h"

/**
 * _strlen - writes string to stdout.
 * @str: The string to print.
 *
 * Return: On success length of string.
 */
int _strlen(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
		;

	return (i);
}
