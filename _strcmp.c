#include <stdlib.h>
#include "shell.h"

/**
 * _strcmp - check if two strings are similar to each other.
 * @str1: The string to print.
 * @str2: The string to print.
 *
 * Return: 0 if equal else return 1.
 */
int _strcmp(char *str1, char * str2)
{
    while(*str1 && *str2)
    {
        if (*str1 != *str2)
            return (1);
        
        str1++;
        str2++;
    }

    if (*str1 == *str2)
        return (0);
    
    return (1);
}
