#include "main.h"

/**
 * _printf -> Prints a formatted string
 *
 * @format: Input String Format
 *
 * Return: Number chars Printed
 */

int _printf(const char *format, ...)
{
	int printed = 0, i;
	va_list list;

	va_start(list, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'c')
				printed += _put(va_arg(list, int));
			else if (format[i] == 's')
				printed += _puts(va_arg(list, char *));
			else if (format[i] == 'd' || format[i] == 'i')
				printed = put_int(va_arg(list, int));
			else
				printed += _put(format[i]);
		} else
			printed += _put(format[i]);
	} va_end(list);
	return (printed);
}
