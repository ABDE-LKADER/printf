#include "main.h"

/**
 * _put -> Writes the character c to stdout
 *
 * @c: Input Char
 *
 * Return: Depend (Success Or Not)
 */

int _put(char c)
{
	return (write(1, &c, 1));
}
