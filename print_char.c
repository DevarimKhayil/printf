#include "mainy.h"

/**
 * print_char - prints a charachter
 * @value: function parameter
 * Return: 1.
 */
int print_char(va_list value)
{
	char v;

	v = va_arg(value, int);
	_putchar(v);
	return (1);
}
