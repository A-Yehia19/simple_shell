#include "shell.h"

/**
 * create_path - create fullpath of the program
 * @dir: The string of the dirictory.
 * @program: The string of the program.
 *
 * Return: fullpath.
 */
char *create_path(char *dir, char *program)
{
	char *result;
	int len1, len2;

    	for (len1 = 0; dir[len1] != '\0'; len1++)
		;
	for (len2 = 0; program[len2] != '\0'; len2++)
		;
	
	result = malloc (sizeof(char) * (len1 + len2 + 2));
	if (result == NULL)
		return (NULL);
	
	_strcpy(result, dir);
	_strcpy(result + len1, "/");
	_strcpy(result + len1 + 1, program);
	result[len1 + len2 + 1] = '\0';
	return (result);
}
