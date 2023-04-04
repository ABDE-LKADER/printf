#ifndef PRINT_H
#define PRINT_H

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

int _printf(const char *format, ...);
int _put(char c);
int _puts(char *s);

#endif