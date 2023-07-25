#include "main.h"
#include <stdarg.h>
#include <stddef.h>
/**
 * cases_check - check the best case of the given specifier
 * @spec: the given specifier
 * @arr:  array of structers
 * @args_list: a list of all the given arguments
 * Return: number of chars printed
 */
int cases_check(char spec, cases arr[], va_list args_list)
{
	int char_printed = 0;
	int j;

	for (j = 0; arr[j].sp != NULL; j++)
	{
		if (spec == arr[j].sp[0])
		{
			char_printed = arr[j].f(args_list);
			return (char_printed);
		}
	}
	char_printed = char_printed + _putchar('%');
	char_printed = char_printed + _putchar(spec);
	return (char_printed);
}
