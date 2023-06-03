#include "main.h"

/**
 * plusFlag - Prints an int with plus flag
 * @plus: List of variadic arguments
 *
 * Return: Return (count) ALWAYS
 */
int plusFlag(va_list plus)
{
	int n, num, digit, mod, input;
	int count = 0;

	input = va_arg(plus, int);
	mod = input % 10;
	input = input / 10;
	if (mod >= 0)
	{
		_putchar('+');
		count++;
	}
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
 * spaceFlag - Prints an int with space flag
 * @space: List of variadic arguments
 *
 * Return: Return (count) ALWAYS
 */
int spaceFlag(va_list space)
{
	int n, num, digit, mod, input;
	int count = 0;

	input = va_arg(space, int);
	mod = input % 10;
	input = input / 10;
	if (mod >= 0)
	{
		_putchar(' ');
		count++;
	}
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
 * minusFlag - Prints an int with minus flag
 * @minus: List of variadic arguments
 *
 * Return: Return (count) ALWAYS
 */
int minusFlag(va_list minus)
{
	int n, num, digit, mod, input;
	int count = 0;

	input = va_arg(minus, int);
	mod = input % 10;
	input = input / 10;
	if (mod >= 0)
	{
		_putchar('-');
		count++;
	}
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
 * octFlag - Prints the octal equivalent of a int with prefix 0
 * @octF: List of variadic arguments
 *
 * Return: On SUCCESS, return (count) and (-1) on FAILURE
 */
int octFlag(va_list octF)
{
	unsigned int count = 0, n = 0;
	unsigned int *octSize = (unsigned int *)malloc(10 * sizeof(unsigned int));
	int i = 0;

	n = va_arg(octF, unsigned int);
	_putchar('0');
	count++;
	while (n > 0)
	{
		octSize[i] = n % 8;
		n = n / 8;
		i++;
	}
	for (--i; i >= 0; i--)
	{
		_putchar(octSize[i] + '0');
		count++;
	}
	free(octSize);
	return (count);
}
/**
 * hexFlag - Prints the hex-equivalent of an int lowercase with prefix 0x
 * @hexF: List of variadic arguments
 *
 * Return: Return (count) ALWAYS
 */
int hexFlag(va_list hexF)
{
	char *hexSize;
	unsigned int tmp;
	unsigned int count = 0, n = 0;
	int size, i;

	n = va_arg(hexF, unsigned int);
	_putchar(0 + '0');
	count++;
	if (n != 0)
	{
		_putchar('x');
		count++;
	}
	size = 0;
	tmp = n;
	while (tmp > 0)
	{
		tmp = tmp / 16;
		size++;
	}
	hexSize = (char *)malloc(size * sizeof(char));
	if (hexSize == NULL)
		return (-1);
	while (n > 0)
	{
		if (n % 16 >= 10 && n % 16 <= 15)
			hexSize[--size] = 87 + (n % 16);
		else
			hexSize[--size] = 48 + (n % 16);
		n = n / 16;
	}
	for (i = 0; i < size; i++)
	{
		_putchar(hexSize[i]);
		count++;
	}
	free(hexSize);
	return (count);
}
/**
 * HEXflag - Prints the hex-equivalent of an int UPPERCASE with prefix 0X
 * @HEXf: List of variadic arguments
 *
 * Return: Return (count) ALWAYS
 */
int HEXflag(va_list HEXf)
{
	char *hexSize;
	unsigned int tmp;
	unsigned int count = 0, n = 0;
	int size, i;

	n = va_arg(HEXf, unsigned int);
	_putchar(0 + '0');
	count++;
	if (n != 0)
	{
		_putchar('X');
		count++;
	}
	tmp = n;
	while (tmp > 0)
	{
		tmp = tmp / 16;
		size++;
	}
	hexSize = (char *)malloc(size * sizeof(char));
	if (hexSize == NULL)
		return (-1);
	while (n > 0)
	{
		if (n % 16 >= 10 && n % 16 <= 15)
			hexSize[--size] = 55 + (n % 16);
		else
			hexSize[--size] = 48 + (n % 16);
		n = n / 16;
	}
	for (i = 0; i < size; i++)
	{
		_putchar(hexSize[i]);
		count++;
	}
	free(hexSize);
	return (count);
}
