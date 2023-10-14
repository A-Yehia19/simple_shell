#include "shell.h"

/**
 * _pow - perform power operation.
 * @base: The base number.
 * @power: The power number.
 *
 * Return: On success answer.
 */
int _pow(int base, int power)
{
	int i, ans;

	ans = 1;
	for (i = 0; i < power; i++)
		ans *= base;

	return (ans);
}
