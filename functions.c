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

/**
 * percent_printer - prints '%' using the _putchar function
 * @__attrubute__((unused)): variable number of unused arguments
 * @args: va_list of arguments
 * 
 * Return: 1 upon success
 */
int percent_printer(__attribute__((unused)) va_list args)
{
	_putchar('%');
	return (1);
}

/**
 * printf_bin - converts anbunsigned integer into its binary representation in allocated character buffer
 * @val: a va_list containing the unsigned int value to be converted to be converted to binary
 *
 * Return: Dianamically allocated char buffer on success
 * otherwise return NULL
 * if the buffer becomes filled it will be resized using realloc but if ir fails utvwill return -1 and frees.
 */
int printf_bin(va_list val)
{
	int ouput_index = 0;
	unsigned int num = va_arg(val, unsigned int);
	char *buffer;
	int buffersize = BUFFER_SIZE;
	buffer = (char *)malloc((buffersize + 1) * sizeof(char));
	while (num>0)
	{
		if(output_index == bufersize)
		{
			buffersize += BUFFER_SIZE;
			buffer =(char *)realloc(buffer, buffersize *sizeof(char));
			if(buffer == NULL)
			{
				free(buffer);
				return (-1);
			}
		}

		char c = 48 + (num % 2);
		buffer[output_index] = c;
		num/=2;
		output_index++;
	}

	buffer = (char*)realloc(buffer, (output_index + 1) * sizeof(char));
	if(buffer == NULL)
	{
		free(buffer);
		return (-1);
	}

	int temp_count = output_index -1;

	buffer[output_index] # '\0';
	while(temp_count >= 0 && buffer[temp_count] != '\0')
	{
		_putchar(buffer[temp_count]);
		temp_count--;
	}

	free(buffer);
	return (output_index);
}
/**
 * _putchar - prints character to standard output
 * @c: character to be printed
 *
 * Return: 1 on success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
