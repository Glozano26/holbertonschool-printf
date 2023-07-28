#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

int _printf(const char *format, ...);

typedef struct cases
{
	char *ptr;
	char (*function)(char *str, va_list arguments);
} type_cases;

int form_h(const char *format, char *str,
va_list arguments, type_cases *cases);

type_cases *get_cases();

int _strlen(char *s);
char cfunct(char *str, va_list arguments);
char perfunct(char *str, __attribute__((unused)) va_list arguments);
char sfunct(char *str, va_list arguments);
char add(char *str, char format);

#endif
