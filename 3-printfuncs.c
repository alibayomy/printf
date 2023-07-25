#include "main.h"
/**
 * handle_unsint - print an unsigned decimal (base 10)
 *	number to stdout
 * @lst: list of the given arguments
 * Return: the number of characters printed
 */
int handle_unsint(va_list lst)
{
	unsigned int num;

	num = va_arg(lst, int);
	if (num == 0)
		return (_putchar('0'));
	if (num < 1)
		return (-1);
	return (print_unsint(num));
}
#include "main.h"
/**
 * handle_octal - write an octal num to binary in std out
 * @lst: lst of the given arguments
 * Return: number of characters printed
 */
int handle_octal(va_list lst)
{
	int remainder, num_printed = 0, i = -1;
	unsigned int num;
	int bi_array[32];
	unsigned int pstv_num;

	num = va_arg(lst, int);
	if (num == 0)
	{
		num_printed = _putchar('0');
		return (num_printed);
	}
	else if (num < 1)
		return (-1);
	pstv_num = num;
	while (pstv_num >= 1)
	{
		i++;
		remainder = pstv_num % 8;
		bi_array[i] = remainder;
		pstv_num = pstv_num / 8;
	}
	for (; i >= 0; i--)
		num_printed = num_printed + _putchar(48 + bi_array[i]);
	return (num_printed);
}
