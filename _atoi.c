#include "shell.h"

/**
 * _atoi - convert string to number
 * @str: input string
 * Return: number conversion
 */

int _atoi(char *str)
{
	int i, ans = 0;

	for (i = 0; str[i] != '\0'; i++)
		ans = ans * 10 + (str[i] - '0');

	return (ans);
}
