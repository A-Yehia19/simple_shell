#include "printf.h"

/**
 * _putnum_withCounter - writes the number to stdout.
 * @num: The number to print.
 * @i: pointer to length
 *
 * Return: On success length of number.
 */

void _putnum_withCounter(long int num, int *i)
{
	if (num / 10)
		_putnum_withCounter(num / 10, i);
	_putchar(num % 10 + '0');
	*i += 1;
}

/**
 * _putnum - writes the number to stdout
 * @num: The number to print
 *
 * Return: On success length of number.
 */
int _putnum(long int num)
{
	int i;

	i = 0;
	if (num < 0)
	{
		_putchar('-');
		num = -num;
		i++;
	}

	_putnum_withCounter(num, &i);
	return (i);
}
