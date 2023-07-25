#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
/**
 * struct Format - format a structure to match the
 *	specifier with its function
 * @sp: the given specifier
 * @f: a pointer to the needed function
 */
struct Format
{
	char *sp;
	int (*f)(va_list);
};
typedef struct Format cases;
int _printf(const char *format, ...);
int _putchar(char c);
int cases_check(char spec, cases arr[], va_list lst);
int handle_char(va_list lst);
int handle_str(va_list lst);
int handle_precn(va_list lst);
int handle_double(va_list lst);
#endif
