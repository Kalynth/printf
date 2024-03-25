#ifndef MAIN_H
#define MAIN_H

#include <limits.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct format - structure for managing printf conversions
 * @specifier: pointer to thr char repr conversion specifier
 * @handler: function pointer to the function that handles conversion
 */

typedef struct format
{
	char *specifier;
	int (*handler)();
} conversion;


int _strlen(char *k);
int handle_string(va_list lol);
int handle_char(va_list lol);
int _printf(const char *format, ...);
int _putchar(char c);
int _strlen(const char *k);
int handle_modifier(void);
int handle_int(va_list lol);
int handle_dec(va_list lol;)
#endif
