#include <stdarg.h>
#include <stdlib.h>
#include "main.h"

/**
 * _putchar -> Writes the character
 *
 * @c: Input Char
 *
 * Return: ...
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _printf -> Printf function
 *
 * @format: Input String
 *
 * Return: Deoend Condition
 */

int _printf(const char *format, ...)
{
	int i;
	int num;
	va_list list;
	
	if (format == NULL)
		return (-1);

	va_start(list, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (format[i] == '\0')
				return (-1);
			else if (format[i] == 'd')
			{
				num = va_arg(args, int);
			}
		}
		else
			_puthar(format[i]);
	}
	va_end(list);
	return ();
}
