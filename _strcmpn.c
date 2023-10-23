#include "shell.h"

/**
 * _strcmpn - check if two strings are similar to each other.
 * untill one reach its end
 * @str1: The string 1 to compare.
 * @str2: The string 2 to comapre.
 *
 * Return: 0 if equal else return 1.
 */
int _strcmpn(char *str1, char *str2)
{
	while (*str1 && *str2)
	{
		if (*str1 != *str2)
			return (1);

		str1++;
		str2++;
	}

	return (0);
}
