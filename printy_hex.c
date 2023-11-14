#include "mainy.h"

/**
 * print_hexy - prints an hexdec numb
 * @value: args
 * Return: counter.
 */
int print_hexy(va_list value)
{
	int z;
	int *arr;
	int count = 0;
	unsigned int numb = va_arg(value, unsigned int);
	unsigned int temp = numb;

	while (numb / 16 != 0)
	{
		numb /= 16;
		count++;
	}
	count++;
	arr = malloc(count * sizeof(int));

	for (z = 0; z < count; z++)
	{
		arr[z] = temp % 16;
		temp /= 16;
	}
	for (z = count - 1; z >= 0; z--)
	{
		if (arr[z] > 9)
			arr[z] = arr[z] + 7;
		_putchar(arr[z] + '0');
	}
	free(arr);
	return (count);
}
