#include "main.h"

/**
 * num_printer - Prints an integer
 * @args: Arguments passed to the function
 *
 * Return: The number of character printed.
 */
int num_printer(va_list args)
{
	int modulu_checker = 1;
	int count = 0;
	int num_copy;

	int num = va_arg(args, int);

	if (num < 0)
	{
		count += _putchar('-');
		num_copy = num * -1;
	}
	else
	{
		num_copy = num;
	}

	while ((num_copy / modulu_checker) > 9)
	{
		modulu_checker *= 10;
	}

	while (modulu_checker != 0)
	{
		count += _putchar('0' + (num_copy / modulu_checker));
		num_copy %= modulu_checker;
		modulu_checker /= 10;
	}
	return (count);
}

/**
 * unsignedInt_printer - prints unsigned integer number
 * to the standard output
 * @num: unsigned integer to be printed
 *
 * Return: The number of characters printed
 */
int unsignedInt_printer(unsigned int num)
{
	int modulu_checker = 1;
	int count = 0;
	int num_copy;

	num_copy = num;

	while ((num_copy / modulu_checker) > 9)
	{
		modulu_checker *= 10;
	};

	while (modulu_checker != 0)
	{
		count += _putchar('0' + (num_copy / modulu_checker));
		num_copy %= modulu_checker;
		modulu_checker /= 10;
	}
	return (count);
}

/**
 * char_printer - prints character variable as an argument
 * @args: Number of arguments as variables
 *
 * Return: 1 upon success by counting number printed
 */
int char_printer(va_list args)
{
	char character;

	character = va_arg(args, int);
	_putchar(character);
	return (1);
}

/**
 * string_printer - prints string from the list of arguments
 * @args: A va_list, containing the list of variables
 * Return: Empty string if it's NULL, else number of character printed
 */
int string_printer(va_list args)
{
	int count = 0;
	const char *s;

	s = va_arg(args, const char *);
	if (s == NULL)
		s = "(null)";

	while (s[count] != '\0')
	{
		_putchar(s[count]);
		count++;
	}

	return (count);
}

/**
 * percent_printer - prints '%' using the _putchar function
 * @args: va_list of arguments
 *
 * Return: 1 upon success
 */
int percent_printer(__attribute__((unused)) va_list args)
{
	_putchar('%');
	return (1);
}
