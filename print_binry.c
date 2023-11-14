#include "main.h"

/**
 * print_biny - prints a binary number
 * @num: number arguements
 * @printed: the printed characters
 * Return: printed charcaters
 */

int print_biny(unsigned int num, int printed)
{
	int binary[32] = {0};
	int z = 0;

	if (num == 0)
	{
		_putchar('0');
		printed++;
		return (printed);
	}

	while (num > 0)
	{
		binary[z] = num % 2;
		num /= 2;
		z++;
	}

	while (z > 0)
	{
		z--;
		_putchar('0' + binary[z]);
		printed++;
	}

	return (printed);
}
