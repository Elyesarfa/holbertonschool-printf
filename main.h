#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stddef.h>

/**
 * struct ntype_t - structure of members string and function pointer
 * @id: string
 * @f: function pointer
*/

typedef struct ntype_t
{
	const char *id;
	int (*f)();
} ntype_t;

int _putchar(char c);
int _printf(const char *format, ...);
int pc(va_list l);
int ppercent(void);
int ps(va_list l);
int p_int(va_list l);
int p_dec(va_list l);
size_t _strlen(const char *s);
int format_specifier(char specifier, va_list l);

#endif
