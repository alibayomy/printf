#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <stddef.h>
/**
 * _putchar - print a charcter to stdout
 * @c: the given character
 * Return: always 1
 */
int _putchar(char c)
{
	write(1, &c, 1);
	return (1);
}
/**
 * handle_char - writes character to stdout
 * @lst: variadic function arguments
 * Return: 1 always
 */
int handle_char(va_list lst)
{
	char c;

	c = va_arg(lst, int);
	write(1, &c, 1);
	return (1);
}
/**
 * handle_str - writes  a string to the stdout
 * @lst: the given argument lst
 * Return: the number of characters printed
 */
int handle_str(va_list lst)
{
	char *s;
	int i = 0;

	s = va_arg(lst, char *);
	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	return (i);
}
/**
 * handle_precn - writes the "%" to the stdout
 * @lst: variadic funtion arguments
 * Return: 1 always
 */
int handle_precn(va_list lst)
{
	(void)lst;
	write(1, "%", 1);
	return (1);
}
