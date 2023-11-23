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
    };
    int len = strlen(format);
    va_list list;
    
    va_start(list, format);
    if (!format)
    {
        errormsg();
        return (0);
    }
    while (j < len)
    {
        if (format[j] != '%')
        {
            if (format[j] == '\\' && format[j + 1] == 'n')
            {
                putchar('\n');
                j = j + 2
            }
            else
            {
                putchar(format[j]);
                j++;
            }
        }
    }
    *fptr = *fptr;
    va_end(list);
    return (0);
}