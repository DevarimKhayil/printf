#include "mainy.h"

/**
 * selecty - selects appropriate specifiers
 * @args: no of arguements
 * @printed: the printed characters
 * @format: the format specifier
 * Return: printed charcaters
 */

int selecty(const char *format, va_list args, int printed)
{
	switch (*format)
	{
		case 'd':
		case 'i':
			printed = printf_inty(args, printed);
			break;
		case 'c':
			_putchar(va_arg(args, int));
			printed++;
			break;
		case 's':
			printed = print_stringy(args, printed);
			break;
		case '%':
			_putchar('%');
			printed++;
			break;
		case 'b':
			printed = print_biny(va_arg(args, unsigned int), printed);
			break;
		case 'o':
			printed = printf_octa(va_arg(args, unsigned int), printed);
			break;
		case 'u':
			printed = printf_unsignedinty(va_arg(args, unsigned int), printed);
			break;
		default:
			break;
	}
	return (printed);
}
