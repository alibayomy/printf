#include "main.h"
/**
 * handle_binary - write a decimal num to binary in std out
 * @lst: lst of the given arguments
 * Return: number of characters printed
 */
int handle_binary(va_list lst)
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
		remainder = pstv_num % 2;
		bi_array[i] = remainder;
		pstv_num = pstv_num / 2;
	}
	for (; i >= 0; i--)
		num_printed = num_printed + _putchar(48 + bi_array[i]);
	return (num_printed);
}
