#include "main.h"
#include <unistd.h>

#define BUFFER_SIZE 10

/**
 * number_printer - prints a given integer number
 *
 * This function takes integer as a variable
 * And prints it to standard output
 * If the number is < 0, print with a negative sign.
 *
 * va_list args - Arguments passed to the function.
 *
 * Return: The number of character printed.
 */
int number_printer(va_list args)
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
		count += _putchar('0' +( num_copy / modulu_checker));
		modulu_checker /= 10;
	}
	 return (count);
}
/**
 * print_insigned_number - prints unsigned integer number
 * to the standard output
 * @unsigned int num: unsigned integer to be printed
 *
 * Return: The number of characters printed
 */
int print_unsigned_number(unsigned int num)
{
	int modulu_checker = 1;
	int count = 0;
	int num_copy;

	num_copy = num;

	while ((num_copy/modulu_checker) > 9)
	{
		modulu_checker *= 10;
	};

	while (modulu_checker != 0)
	{
		count += _putchar('0' +( num_copy / modulu_checker));
		num_copy %= modulu_checker;
		modulu_checker /= 10;
	}
	return (count);
}

/**
 * char_printer - prints character variable as an argument
 * @va_list args: Number of arguments as variables
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
 * string_printer _ prints string from the list of arguments
 * @args: A va_list, containing the list of variables
 * Return: Empty string if it's NULL, else number of character printed
 */
int string_printer(va_list args)
{
	int count = 0;
	const char *s;

	s = va_arg(args, const char *);
	if (s == NULL) {s = "(null)";}

	while(s[count] != '\0')
	{
		_putchar(s[count]);
		count++;
	}

	return (count);
}

