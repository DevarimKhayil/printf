#include "main.h"

/**
 * printf_strg - prints a string
 * @args: numberof arguements
 * @printed: the printed characters
 * Return: printed charcaters
 */

int printf_strg(va_list args, int printed)
{
	char *strg = va_arg(args, char *);

	while (*strg != '\0')
	{
		_putchar(*strg);
		printed++;
		strg++;
	}
	return (printed);
}
