#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * 
*/

void pc(va_list l)
{
    putchar(va_arg(l, int));
}

/**
 * 
*/

void ppercent(va_list l)
{
    putchar('%');
    l = l;
}

/**
 * 
*/

void ps(va_list l)
{
    char *str = va_arg(l, char *);
    int i = 0;

    while(str[i] == '\0')
    {
        putchar(str[i]);
        i++;
    }
}

/**
 * 
*/

void errormsg()
{
    putchar('e');
    putchar('r');
    putchar('r');
    putchar('o');
    putchar('r');
}