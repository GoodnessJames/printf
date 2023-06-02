#include "main.h"

/**
 * _printf - Produces output according to a format
 * @format: A pointer to a character of strings containing the specifiers
 *
 * Return: On SUCCESS, returns (count) and (-1) on FAILURE
 */
int _printf(const char *format, ...)
{
	unsigned int count = 0, i = 0;
	int (*fpt)(va_list);
	va_list list;

	if (*format == '\0')
		return (-1);
	va_start(list, format);
	while (format && format[i])
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			count++;
		}
		else if (format[i] == '%' && format[i + 1] == '\0')
			return (-1);
		else if (format[i] == '\0')
			return (count);
		else if (format[i] == '%')
		{
			fpt = specifier_parser(format, i + 1);
			i += 1;
			if (fpt == NULL)
			{
				count += print_specialFormat(format, i);
			}
			else
			{
				count = count + fpt(list);
				if (format[i] == '+' || format[i] == ' ' || format[i] == '#')
					i++;
			}
		}
		i++;
	}
	va_end(list);
	return (count);
}
