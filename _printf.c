#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * _printf - Custom printf function
 * 
 * @format: Format string
 *
 * Return: Number of characters printed
 */

int _printf(const char *format, ...)
{
	int i = 0, j = 0, count = 0;
	char *str;
	va_list args;

	if (format == NULL)
		return (-1);

	va_start(args, format);
	
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '\0')
				return (-1);
			if (format[i] == 'c')
			{
				char c = va_arg(args, int);
				write(1, &c, 1);
				count++;
			}
			else if (format[i] == 's')
			{
				str = va_arg(args, char *);
				if (str == NULL)
					str = "(null)";
				while (str[j])
				{
					write(1, &str[j], 1);
					count++;
					j++;
				}
				j = 0;
			}
			else
			{
				char *num_str;
				int num = va_arg(args, int);
				int len = 0;

				if (num == 0)
				{
					write(1, "0", 1);
					count++;
				}
				else
				{
					while (num > 0)
					{
						num /= 10;
						len++;
					}

					num_str = malloc(sizeof(char) * (len + 1));
					if (num_str == NULL)
						return (-1);
					num_str[len] = '\0';
					num = va_arg(args, int);
					while (num > 0)
					{
						len--;
						num_str[len] = (num % 10) + '0';
						num /= 10;
					}

					write(1, num_str, len + 1);
					count += len + 1;
					free(num_str);
				}
			}
			}
			else
			{
			write(1, &format[i], 1);
			count++;
			}
		i++;
	}
	va_end(args);
	return (count);
}
