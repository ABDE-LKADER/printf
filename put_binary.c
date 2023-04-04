#include "main.h"

/**
 * put_binary -> Prints the binary representation of an unsigned integer
 *
 * @n: Input Unsigned Integer
 *
 * Return: Number of digits printed
 */

int put_binary(unsigned int n)
{
	int len = 0, i;
	char *str;

	for (i = n; i > 0; i /= 2)
		len++;
	str = malloc((len - 1) * sizeof(char));
	if (str == NULL)
		return (-1);
	for (i = len - 1; i >= 0; i--)
	{
		str[i] = (n % 2) + '0';
		n /= 2;
	}
	str[i] = '\0';
	len = _puts(str);
	free(str);
	return (len);
}
