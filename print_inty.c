#include "main.h"

/**
 * printf_inty - prints int
 * @args: no. of arg
 * @printe: the printed characters
 * Return: printed charcaters
 */

int printf_inty(va_list args, int printe)
{
	int count1 = va_arg(args, int);
	int dig = 0;
	int temp = count1;
	int digit;

	if (count1 < 0)
	{
		printe += _putchar('-');
		count1 = -count1;

		temp = count1;
	}

	do {
		dig++;
		temp /= 10;
	} while (temp != 0);

	while (dig > 0)
	{
		int powr1 = 1;
		int z;

		for (z = 1; z < dig; z++)
		{
			powr1 *= 10;
		}
		digit = count1 / powr1;
		printe += _putchar(digit + '0');
		count1 -= digit * powr1;
		dig--;
	}
	return (printe);
}
