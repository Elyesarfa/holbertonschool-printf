#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

typedef struct structname{
  char character;
  void (*f)(va_list);
} ntype_t;

int _printf(const char *format, ...);
void errormsg();
void pc(va_list l);
void ppercent(va_list l);
void ps(valist l);

#endif
