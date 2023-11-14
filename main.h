#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>
#include <stdlib.h>
int _printf(const char *format, ...);
int print_char(va_list value);
int print_stringy(va_list args, int printy);
int printf_inty(va_list args, int printe);
int printf_perc(void);
int print_decy(va_list args);
int printf_octa(unsigned int num, int printed);
int print_biny(unsigned int num, int printed);
int _putchar(char chara);
int printf_unsignedinty(unsigned int num, int printed);
int print_hexy(va_list value);
int selecty(const char *format, va_list args, int printed);
#endif
