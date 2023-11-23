#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "main.h"

/**
 * 
*/

int _printf(const char *format, ...)
{
    int j = 0;
    ntype_t fptr[] = {
        {'c', pc},
        {'s', ps},
        {'%', ppercent},
        {'\0', NULL}
    }
    
    va_list list;
    
    va_start(list, format);
    if (!format)
        errormsg();
        return (0);
    int len = strlen(format);
    while (j < len)
    {
        if (format[j] != '%')
        {
            putchar(format[j]);
            j++;
        }
    }
    va_end(list);
    return (0);
}