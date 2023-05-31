#include "main.h"

/**
 * print_specialFormat - Prints non-standard format specifiers
 * @format: A pointer to a character with a fixed value and varying address
 * @i: Index counter
 *
 * Return: Returns (count) ALWAYS
 */
int print_specialFormat(const char *format, int i)
{
	int count = 0;

	if (format[i] != '%')
	{
		_putchar(format[i - 1]);
		count += 1;
	}
	_putchar(format[i]);
	count += 1;
	return (count);
}
