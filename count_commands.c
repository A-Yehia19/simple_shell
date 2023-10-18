#include "shell.h"

/**
 * count_commands - count number of commands in the line
 * @line: input line
 * @sep: starting location of commands
 * Return: number of commands
 */
int count_commands(char *line, int sep[])
{
	int i, command_num;

	sep[0] = 0;
	command_num = 1;
	for (i = 0; line[i] != '\0'; i++)
	{
		if (line[i] == '\n' || line[i] == ';')
		{
			line[i] = '\0';
			sep[command_num] = i + 1;
			command_num++;
		}
	}

	return (command_num);
}
