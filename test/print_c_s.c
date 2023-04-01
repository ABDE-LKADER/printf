#include "main.h"

/**
 * _printf -> Custum printf
 *
 * @format: Input Format String
 *
 * Return: Number Char Printed
 */

int _printf(const char *format, ...)
{
	int count = 0;
	char char_arg, *str_arg;
	va_list args;

	va_start(args, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
					char_arg = va_arg(args, int);
					write(1, &char_arg, 1);
					count++;
					break;
				case 's':
					str_arg = va_arg(args, char *);
					while (*str_arg != '\0')
					{
						write(1, str_arg, 1);
						str_arg++;
						count++;
					} break;
				case '%':
					write(1, "%", 1);
					count++;
					break;
			}
		} else
		{
			write(1, format, 1);
			count++;
		} format++;
	} va_end(args);
	return (count);
}
