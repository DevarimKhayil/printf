#include "main.h"

/**
 * printf_ch - prints a character
 * @args: functin parameter
 * @printed: the printed characters
 * Return: printed charcaters
 */

int printf_ch(va_list args, int printed)
{
	int ch = va_arg(args, int);

	_putchar(ch);
	return (printed + 1);
}
