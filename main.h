#ifndef MAIN_H
#define MAIN_H

#undef INT_MAX
#define INT_MAX 2147483647
#undef INT_MIN
#define INT_MIN (-INT_MAX - 1)
#undef BUFFER_SIZE
#define BUFFER_SIZE 1024

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

int _printf(const char *format, ...);
int _put(char c);
int _puts(char *s);
int put_int(int n);

#endif