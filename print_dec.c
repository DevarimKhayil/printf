#include "main.h"
/**
 * printf_decimal - prints decimal
 * @args: argument to print
 * Return: number of characters printed
 */

int printf_decimal(va_list args)
{
	int a = va_arg(args, int);
	int count, last = a % 10, digit;
	int  b = 1;
	int exp = 1;

	a = a / 10;
	count = a;

	if (last < 0)
	{
		_putchar('-');
		count = -count;
		a = -a;
		last = -last;
		b++;
	}
	if (count > 0)
	{
		while (count / 10 != 0)
		{
			exp = exp * 10;
			count = count / 10;
		}
		count = a;
		while (exp > 0)
		{
			digit = count / exp;
			_putchar(digit + '0');
			count = count - (digit * exp);
			exp = exp / 10;
			b++;
		}
	}
	_putchar(last + '0');

	return (b);
}
