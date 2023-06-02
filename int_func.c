#include "main.h"

/**
 * print_int - Prints an integer
 * @nums: List of variadic arguments
 *
 * Return: Returns (count) ALWAYS
 */
int print_int(va_list nums)
{
	int n, num, digit, mod, input;
	int count = 0;

	input = va_arg(nums, int);
	mod = input % 10;
	input = input / 10;
	if (mod < 0)
	{
		input = -input;
		mod = -mod;
		_putchar('-');
		count++;
	}
	num = input;
	digit = 1;
	if (num > 0)
	{
		while ((num / 10) != 0)
		{
			num = num / 10;
			digit = digit * 10;
		}
		while (digit >= 1)
		{
			n = input / digit;
			_putchar(n + '0');
			count++;
			input = input % digit;
			digit = digit / 10;
		}
	}
	_putchar(mod + '0');
	count++;
	return (count);
}
/**
 * print_binary - Convert an int to it's binary equivalent
 * @bi: List of variadic arguments
 *
 * Return: Returns (count) ALWAYS
 */
int print_binary(va_list bi)
{
	unsigned int binary[32];
	int index = 0;
	unsigned int n = 0, count = 0;

	n = va_arg(bi, unsigned int);
	if (n <= 1)
	{
		_putchar(n + '0');
		count++;
	}
	else
	{
		while (n > 0)
		{
			binary[index] = n % 2;
			n = n / 2;
			index++;
		}
		for (index = index - 1; index >= 0; index--)
		{
			_putchar(binary[index] + '0');
			count++;
		}
	}
	return (count);
}

/**
 * print_percent - Prints the character '%'
 * @args: List of variadic arguments
 *
 * Return: Return (1) ALWAYS
 */
int print_percent(__attribute__((unused)) va_list args)
{
	_putchar('%');
	return (1);
}
