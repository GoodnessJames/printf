#include "main.h"

/**
 * _printf - Produces output according to a format
 * @format: A pointer to a character string
 *
 * Return: On SUCCESS, returns (print_char_count)
 *	   On FAILURE, returns (-1)
 */
int _printf(const char *format, ...)
{
	va_list args;
	int print_char_count;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	print_char_count = format_parser(format, args);
	va_end(args);

	return (print_char_count);
}
