#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>


void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);
void print_all(const char * const format, ...);
/**
 * print_char - function that prints a char
 * @arg: first parameter
 */
void print_char(va_list arg)
{
	printf("%c", va_arg(arg, int));
}
/**
 * print_int - function that prints an integer
 * @arg: first parameter
 */
void print_int(va_list arg)
{
	printf("%d", va_arg(arg, int));
}
/**
 * print_float - function that prints a float
 * @arg: first parameter
 */
void print_float(va_list arg)
{
	printf("%f", va_arg(arg, double));
}
/**
 * print_string - function that prints a string
 * @arg: first parameter
 */
void print_string(va_list arg)
{
	char *str = va_arg(arg, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", str);
}
/**
 * print_all - function that prints all
 * @format: list of types of arguments passed to function
 * @...: variable
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j = 0;
	char *separator = "";
	printer_t funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(args, format);

	while (format != NULL && (format[i] != '\0'))
	{
		j = 0;
		while (j < 4 && (format[i] != *(funcs[j].type)))
			j++;

		if (j < 4)
		{
			printf("%s", separator);
			funcs[j].print(args);
			separator = ", ";
		}

		i++;
	}

	printf("\n");

	va_end(args);
}
