#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
/**
 * _printf - produces output according to format
 * @format: a character strings composed of zero or more directives
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	cases str_list[] = {
		{"c", handle_char},
		{"s", handle_str},
		{"%", handle_precn},
		{"d", handle_double},
		{"i", handle_double},
		{"b", handle_binary},
		{"u", handle_unsint},
		{"o", handle_octal},
		{"x", handle_hexa_lower},
		{"X", handle_hexa_lower},
		{NULL, NULL}
	};
	int i = 0, x, char_printed = 0;
	va_list args;

	va_start(args, format);

	while (format[i] != '\0')
		i++;
	for (x = 0; format[x] != '\0'; x++)
	{
		if ((format[x] == '%' && i == 1) || format == NULL
				|| (format[x] == '%' && format[x + 1] == ' '))
		{
			return (-1);
		}
		else if (format[x] == '%')
		{
			char_printed = char_printed + cases_check(format[x + 1], str_list, args);
			x++;
		}
		else
		{
			_putchar(format[x]);
			char_printed++;
		}
	}
	va_end(args);
	return (char_printed);
}
