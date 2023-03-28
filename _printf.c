#include <stdarg.h>
#include <stdlib.h>
#include "main.h"

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
	va_list list;

	va_start(list, format);
	
	if (format == NULL)
        return (-1);
	va_end();
	return ();
}

