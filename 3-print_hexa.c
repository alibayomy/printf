#include "main.h"
/**
 * handle_hexa_lower - print a given decimal
 *      number to hexa in lower case to stdout
 * @lst: the given list of arguments
 * Return: the number of chars printed
 */
int handle_hexa_lower(va_list lst)
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
		remainder = pstv_num % 16;
		if (remainder > 9)
		{
			remainder = remainder + 39;
		}
		bi_array[i] = remainder;
		pstv_num = pstv_num / 16;
	}
	for (; i >= 0; i--)
		num_printed = num_printed + _putchar(48 + bi_array[i]);
	return (num_printed);
}
/**
 * handle_hexa_upper - print a given decimal
 *      number to hexa in upper case to stdout
 * @lst: the given list of arguments
 * Return: the number of chars printed
 */
int handle_hexa_upper(va_list lst)
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
		remainder = pstv_num % 16;
		if (remainder > 9)
		{
			remainder = remainder + 7;
		}
		bi_array[i] = remainder;
		pstv_num = pstv_num / 16;
	}
	for (; i >= 0; i--)
		num_printed = num_printed + _putchar(48 + bi_array[i]);
	return (num_printed);
}
