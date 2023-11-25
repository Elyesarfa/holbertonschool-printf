#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "main.h"

/**
 * 
*/

int _printf(const char *format, ...)
{
	int len = 0;
	va_list l;
	va_start(l, format);

if (format == NULL)
{
	return (-1);
}
while (*format != '\0')
{
    if (*format == '%' && *(format + 1) != '\0')
	{
		format++;
        len += format_specifier(*format, l);
	}
    else if (*format == '%' && *(format + 1) == '\0')
	{
		return (-1);
	}
	else
    {
	_putchar(*format);
	len++;
    }
    format++;
}
va_end(l);
return (len);
}