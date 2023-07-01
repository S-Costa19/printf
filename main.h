#ifndef MAIN_H
#define MAIN_H

/* header files */
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

/* Function prototype */
int _putchar(char* c);
int cint(va_list arg);
int pSint(int, int);
int pUsint(int, int);
int _printf(const char *format, ...);

int pChar(va_list arg);
int pString(va_list arg);
int pPercent(int pp(va_list arg, x)/*x is a function pointer)*/

#endif /* MAIN_H */
