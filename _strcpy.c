#include "shell.h"

/**
 * _strcpy - copy string from src to dest.
 * @src: The string to print.
 * @dest: The string to print.
 *
 * Return: On success length of string.
 */
int _strcpy(char *dest, char *src)
{
	int i, len;

	for (len = 0; src[len] != '\0'; len++)
		;

	for (i = 0; i < len; i++)
		dest[i] = src[i];

	return (i);
}
