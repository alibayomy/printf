#include "main.h"
#include <stddef.h>
/**
 * write_hexa - writes a hexa to std out
 * @p: unisigned long int i
 * Return: number of chars printed
 */
int write_hexa(unsigned long int  p) /*copied from my print_hexa func*/
{
	int remainder, num_printed = 0, i = -1;
	unsigned long int num;
	int bi_array[32];
	unsigned long int pstv_num;

	num = p;
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
 * handle_pointer - write the memory adress of a given
 *	pointer to the stdout
 * @lst: the given list of arguments
 * Return: number of character printed
 */
int handle_pointer(va_list lst)
{
	 void *p;
	 int  x, printed_chars = 0;
	long int address;
	char *s;

	p = va_arg(lst, void *);
	if (p == NULL)
	{
		s = "(nil)";
		for (x = 0; s[x] != '\0'; x++)
		{
			printed_chars = printed_chars +  _putchar(s[x]);
		}
		return (printed_chars);
	}
	_putchar('0');
	_putchar('x');
	address = (unsigned long int)p;
	printed_chars = write_hexa(address);
	return (printed_chars + 2);
}
