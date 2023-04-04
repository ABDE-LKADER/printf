#include "main.h"

/**
 * put_nbr -> Converts an integer to a string
 *
 * @n: Input Integer
 *
 * Return: Lenght of the integer
*/

int put_nbr(int n)
{
	int len = 0;

	if (n == INT_MIN)
	{
		_put('-');
		_put('2');
		len += put_nbr(147483648);
	}
	else if (n < 0)
	{
		_put('-');
		n = -n;
		len += put_nbr(n);
	}
	else if (n > 9)
	{
		len += put_nbr(n / 10);
		_put(n % 10 + '0');
		len++;
	}
	else
	{
		_put(n + '0');
		len++;
	}
	return (len);
}

/**
 * put_int -> Prints an integer
 *
 * @n: Input Integer
 *
 * Return: Lenght of the integer
 */

int put_int(int n)
{
	int len = 0;
	char *str;

	str = (char *) malloc(BUFFER_SIZE * sizeof(char));
	if (str == NULL)
		return (-1);
	len = put_nbr(n);
	free(str);
	return (len);
}
