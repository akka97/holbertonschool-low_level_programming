#ifndef _VARIADIC_FUNCTIONS_H
#define _VARIADIC_FUNCTIONS_H

#include <stdarg.h>
/**
 * struct printer - structure for printing data
 * @type: format type
 * @print: the function for printing
 */
typedef struct printer
{
	char *type;
	void (*print)(va_list ag_list);
} printer_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int _putchar(char c);

#endif
