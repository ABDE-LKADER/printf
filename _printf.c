#include "main.h"
#include <string.h>

/**
 * _printf - Custom printf function
 *
 * @format: Input String
 *
 * Return: Depend Condition
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, printed_chars = 0;
	char *str, c;

	va_start(args, format);
	while (format && format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'c')
			{
				c = va_arg(args, int);
				printed_chars += write(1, &c, 1);
			}
			else if (format[i] == 's')
			{
				str = va_arg(args, char *);
				if (!str)
					str = "(null)";
				printed_chars += write(1, str, strlen(str));
			}
			else if (format[i] == '%')
			{
				printed_chars += write(1, "%", 1);
			}
			else
			{
				printed_chars += write(1, &format[i - 1], 1);
				printed_chars += write(1, &format[i], 1);
			}
		}
		else
			printed_chars += write(1, &format[i], 1);
		i++;
	}
	va_end(args);
	return (printed_chars);
}
