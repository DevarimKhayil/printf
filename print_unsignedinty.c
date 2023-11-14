#include "mainy.h"

/**
 * printf_unsignedinty - prints a binary number
 * @num: number of arguements
 * @printed: the printed characters
 * Return: printed charcaters
 */

int printf_unsignedinty(unsigned int num, int printed)
{
	int digits = 0;
	unsigned int temp = num;

	do {
		digits++;
		temp /= 10;
	} while (temp != 0);

	if (num == 0)
	{
		_putchar('0');
		printed++;
	}
	else
	{
		char unsigned_str[11];
		int z = 0;

		while (num != 0)
		{
			unsigned_str[z] = (num % 10) + '0';
			num /= 10;
			z++;
		}
		for (z = digits - 1; z >= 0; z--)
		{
			_putchar(unsigned_str[z]);
			printed++;
		}
	}
	return (printed);
}

