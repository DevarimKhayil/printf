#include "mainy.h"

/**
 * print_stringy - prints a string
 * @args: func parameter
 * @printy: the printed characters
 * Return: printed charcaters
 */

int print_stringy(va_list args, int printy)
{
	char *stri = va_arg(args, char *);

	while (*stri != '\0')
	{
		_putchar(*stri);
		printy++;
		stri++;
	}
	return (printy);
}
