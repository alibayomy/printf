#include "main.h"
#include <stddef.h>
/**
 * rev_string - print the given str reversed
 * @lst: the given arguments
 * Return: number of character printed
 */
int rev_string(va_list lst)
{
	char *s;
	int i = 0, x, char_printed = 0;

	s = va_arg(lst, char *);
	if (s == NULL)
		return (-1);
	while (s[i] != '\0')
		i++;
	for (x = i - 1; x  >= 0 ; x--)
	{
		_putchar(s[x]);
		char_printed++;
	}
	return (char_printed);
}
