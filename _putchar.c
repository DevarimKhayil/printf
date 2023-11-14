#include <unistd.h>

/**
 * _putchar - writes character c to stdout
 * @chara: character to print
 * Return: 1, success, -1 error
 */

int _putchar(char chara)
{
	return (write(1, &chara, 1));
}
