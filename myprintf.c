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
    int len;
    va_list list;
    
    if (format == NULL)
    {
        return (0);
    }
    len = strlen(format);
    va_start(list, format);
    while (j < len)
    {
        if (format[j] != '%')
        {
            if (format[j] == '\\' && format[j + 1] == 'n')
            {
                putchar('\n');
                j = j + 2;
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