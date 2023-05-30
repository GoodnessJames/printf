#include "main.h"

/**
 * format_parser - Checks the format passed to the function
 * @format: A pointer to a character string
 * @args: The list of arguments passed
 *
 * Return: On SUCCESS, returns (char_count)
 *	   On FAILURE, returns (-1)
 */
int format_parser(const char *format, va_list args)
{
	type_checker format_list[] = {
		{"c", char_printer},
		{"s", string_printer},
		{"%", percent_printer},
		{"d", num_printer},
		{"i", num_printer},
		{"b", binary_converter},
		{NULL, NULL}
	};
	bool match_checker;
	int j, count_return;
	int i = 0;
	int char_count = 0;

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '%')
			{
				_putchar('%');
				char_count++;
				i += 2;
			}
			else
			{
				j = 0;
				match_checker = false;

				while (format_list[j].id != NULL)
				{
					if (format[i + 1] == format_list[j].id[0])
					{
						count_return = format_list[j].fPtr(args);
						if (count_return == -1)
						{
							return (-1);
						}
						else
						{
							char_count += count_return;
							match_checker = true;
							break;
						}
					}
					j++;
				}
				if (!match_checker)
				{
					_putchar('%');
					char_count++;
					i++;
				}
				else
				{
					i += 2;
				}
			}
		}
		else
		{
			_putchar(format[i]);
			char_count++;
			i++;
		}
	}
	return (char_count);
}
