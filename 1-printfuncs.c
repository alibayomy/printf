#include "main.h"
/**
 * handle_double - write an double num to stdout
 * @lst: list of all the given arguments
 * Return: numbers of digits printed
 */
int handle_double(va_list lst)
{
	int x, n, len = 0, num_printed = 0;
	unsigned int pst_n, loop_n;
	char c;

	n = va_arg(lst, int);
	if (n < 0)
	{
		num_printed = num_printed + _putchar('-');
		n = n * -1;
	}
	pst_n = n;
	while (pst_n > 9)
	{
		pst_n = pst_n / 10;
		len++;
	}
	while (len  >= 0)
	{
		loop_n = n;
		for (x = 1; x <= len; x++)
			loop_n = loop_n / 10;
		c = (loop_n % 10) + 48;
		num_printed = num_printed + _putchar(c);
		len--;
	}
	return (num_printed);
}
/**
 * print_unsint - print an unsigned num to stdout
 * @num: the given unsigned num > 1
 * Return: number of characters printed
 */
int print_unsint(unsigned int num)
{
	unsigned int n, loop_n;
	int len = 0, x, num_printed = 0;
	char c;

	n = num;
	while (n > 9)
	{
		n = n / 10;
		len++;
	}
	while (len >= 0)
	{
		loop_n = num;
		for (x = 1; x <= len; x++)
			loop_n = loop_n / 10;
		c = (loop_n % 10) + 48;
		num_printed = num_printed + _putchar(c);
		len--;
	}
	return (num_printed);
}
