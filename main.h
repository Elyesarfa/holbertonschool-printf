#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>


typedef struct ntype_t {
  const char *id;
  int (*f)();
} ntype_t;

int _putchar(char c);
int _printf(const char *format, ...);
void errormsg();
int pc(va_list l);
int ppercent(void);
int ps(va_list l);
int p_int(va_list l);
int p_dec(va_list l);
size_t _strlenc(const char *s, char c);
size_t _strlen(const char *s);
int format_specifier(char specifier, va_list l);

#endif
