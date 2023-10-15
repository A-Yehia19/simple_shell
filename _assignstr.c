#include "shell.h"

/**
 * _assignstr - allocate memory for string and assign it with src.
 * @src: The string to assign with.
 * @dest: The string to be assigned.
 *
 * Return: On success length of string.
 */
int _assignstr(char **dest, char *src)
{
	int i, len;

	for (len = 0; src[len] != '\0'; len++)
		;

	*dest = malloc(sizeof(char) * (len + 1));
	if (*dest == NULL)
		return (-1);

	for (i = 0; i <= len; i++)
		(*dest)[i] = src[i];

	return (i);
}
