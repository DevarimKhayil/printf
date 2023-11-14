#include "main.h"
/**
 * print_decy - prints decimal
 * @args: argument to print
 * Return: no. of characters printed
 */

int print_decy(va_list args)
{
	int a = va_arg(args, int);
	int cy, l = a % 10, digit;
	int  z = 1;
	int exi = 1;

	a = a / 10;
	cy = a;

	if (l < 0)
	{
		_putchar('-');
		cy = -cy;
		a = -a;
		l = -l;
		z++;
	}
	if (cy > 0)
	{
		while (cy / 10 != 0)
		{
			exi = exi * 10;
			cy = cy / 10;
		}
		cy = a;
		while (exi > 0)
		{
			digit = cy / exi;
			_putchar(digit + '0');
			cy = cy - (digit * exi);
			exi = exi / 10;
			z++;
		}
	}
	_putchar(l + '0');

	return (z);
}
