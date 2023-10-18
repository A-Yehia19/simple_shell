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
		if (str[i] >= '0' && str[i] <='9')
			ans = ans * 10 + (str[i] - '0');
		else
			return (-1);

	return (ans);
}
