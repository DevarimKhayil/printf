#include "main.h"

/**
 * printf_int - prints intiger number
 * @args: number arguements
 * @printed: the printed characters
 * Return: printed charcaters
 */

int printf_int(va_list args, int printed)
{
	int count = va_arg(args, int);
	int digits = 0;
	int temp = count;
	int digit;

	if (count < 0)
	{
		printed += _putchar('-');
		count = -count;

		temp = count;
	}

	do {
		digits++;
		temp /= 10;
	} while (temp != 0);

	while (digits > 0)
	{
		int power10 = 1;
		int a;

		for (a = 1; a < digits; a++)
		{
			power10 *= 10;
		}
		digit = count / power10;
		printed += _putchar(digit + '0');
		count -= digit * power10;
		digits--;
	}
	return (printed);
}
