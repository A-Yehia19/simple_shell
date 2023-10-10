#include "printf.h"

/**
 * _putstr - writes string to stdout.
 * @str: The string to print.
 *
 * Return: On success length of string.
 */
int _putstr(char *str)
{
	int i;

	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i]; i++)
		_putchar(str[i]);

	return (i);
}
