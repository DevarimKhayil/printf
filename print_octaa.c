#include "mainy.h"

/**
 * printf_octa - prints a binary number
 * @num: number of arguements
 * @printed: the printed characters
 * Return: printed charcaters
 */

int printf_octa(unsigned int num, int printed)
{
	int oct[100], z = 0, j;

	while (num != 0)
	{
		int remainder = num % 8;

		oct[z] = 48 + remainder;
		z++;
		num /= 8;
	}

	if (z == 0)
	{
		_putchar('0');
		printed++;
	}
	else
	{
		for (j = z - 1; j >= 0; j--)
		{
			_putchar(oct[j]);
			printed++;
		}
	}
	return (printed);
}
