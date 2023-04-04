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
	int i, j;
	char *str;

	for (i = 0; s[i] != '\0'; i++)
		continue;
	str = (char *) malloc((i + 1) * sizeof(char));
	for (j = 0; s[j] != '\0'; j++)
		_put(s[j]);
	free(str);
	return (i);
}
