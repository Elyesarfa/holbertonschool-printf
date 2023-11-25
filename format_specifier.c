#include "main.h"
#include <stddef.h>

/**
 * 
*/

int format_specifier(char specifier, va_list l)
{
ntype_t fptr[] = {
		{"c", pc},
		{"s", ps},
		{"%", ppercent},
		{"d", p_int},
		{"i", p_dec},
		{"\0", NULL}
	};
	int a = 0;
	int len = 0;
	while (fptr[a].id [0] != '\0')
	{
		if (fptr[a].id[0] == specifier)
		{
			len += fptr[a].f(l);
			return (len);
		}
		a++;
	}
	_putchar('%');
	_putchar(specifier);
	return (2);
}