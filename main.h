l#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

typedef struct {
  char character;
  void (*f)(va_list);
} ntype_t;

int _printf(const char *format, ...);
void errormsg();

#endif
