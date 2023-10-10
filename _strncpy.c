#include "printf.h"

/**
 * _strncpy - copy string from src to dest.
 * @src: The string to print.
 * @dest: The string to print.
 * @len: The string to print.
 *
 * Return: On success length of string.
 */
int _strncpy(char *dest, char *src, int len)
{
	int i;

	for (i = 0; i < len; i++)
		dest[i] = src[i];

	return (i);
}
