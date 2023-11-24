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
	int i;
	ntype_t fptr[] = {
		{'c', pc},
		{'s', ps},
		{'%', ppercent},
		{'\0', NULL}
	};
	int bytecount = 0;
	int len;
	va_list list;
	void (*choose)(va_list);
	
	if (format == NULL)
	{
		return (-1);
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
				bytecount++;
			}
		}
		else
		{
			int found = 0;
			for (i = 0 ; i < 3 ; i++)
			{
				if(format[j + 1] == fptr[i].character)
				{
					choose = fptr[i].f;
					choose(list);
					j = j + 2;
					bytecount++;
					found = 1;
					break;
				}
				if (!found)
				{
					putchar(format[j]);
					putchar(format[j + 1]);
					j = j + 2;
					bytecount = bytecount + 2;
				}
			}
		}
	}

	va_end(list);
	return (bytecount);
}