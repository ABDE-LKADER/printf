#include "main.h"
#include <string.h>

/**
 * print_pointer - Prints a pointer address in hexadecimal
 * @args: arguments passed to printf
 *
 * Return: Number of digits printed
 */

int print_pointer(va_list args)
{
	unsigned long int num = (unsigned long int)va_arg(args, void *);
	int len = 0;
	char hex_num[100];
	int rem;

	_putchar('0');
	_putchar('x');
	len += 2;

	if (num == 0)
	{
		_putchar('0');
		return (len + 1);
	}

	while (num != 0)
	{
		rem = num % 16;
		if (rem < 10)
			hex_num[len] = rem + '0';
		else
			hex_num[len] = rem - 10 + 'a';
		num /= 16;
		len++;
	}

	for (int i = len - 1; i >= 0; i--)
	{
		_putchar(hex_num[i]);
	}

	return (len + 2);
}
