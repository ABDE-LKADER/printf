#include  "main.h"

/**
 * _puts -> Prints string, to stdout
 *
 * @s: Input String
 *
 * Return: String Length
 */

int _puts(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_put(s[i]);
	} return (i);
}
