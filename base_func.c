#include"main.h"

/**
 * print_uInt - Prints an unsigned int
 * @nums: List of variadic arguments
 * Return: Returns (count) ALWAYS
 */
int print_uInt(va_list nums)
{
	unsigned int n, num, digit, mod, input, count = 0;

	input = va_arg(nums, unsigned int);
	mod = input % 10;
	input = input / 10;
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
 * print_octBase - Prints an octal equivalent of an int
 * @oct: List of variadic arguments
 * Return: On SUCCESS, returns (count) and (-1) on FAILURE
 */
int print_octBase(va_list oct)
{
	int i, size;
	unsigned int *octSize, tmp;
	unsigned int count = 0, n = 0;

	n = va_arg(oct, unsigned int);
	if (n == 0)
	{
		_putchar(0 + '0');
		count++;
	}
	else
	{
		size = 0;
		tmp = n;
		while (tmp > 0)
		{
			tmp = tmp / 8;
			size++;
		}

		octSize = (unsigned int *)malloc(size * sizeof(unsigned int));
		if (octSize == NULL)
		{
			return (-1);
		}
	}
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
	return (count);
}
/**
 * print_hexBase - Prints the hexadecimal equivalent of an integer in lowercase
 * @hex: List of variadic arguments
 * Return: Returns (count) ALWAYS
 */
int print_hexBase(va_list hex)
{
	char hexSize[20];
	unsigned int count = 0, n = 0;
	int i = 0;

	n = va_arg(hex, unsigned int);
	if (n == 0)
	{
		_putchar(0 + '0');
		count++;
	}
	while (n > 0)
	{
		if (n % 16 >= 10 && n % 16 <= 15)
			hexSize[i] = 87 + (n % 16);
		else
			hexSize[i] = 48 + (n % 16);
		n = n / 16;
		i++;
	}
	for (--i; i >= 0; i--)
	{
		_putchar(hexSize[i]);
		count++;
	}
	return (count);
}
/**
 * print_HEXbase - Prints the hexadecimal equivalent of an integer in UPPERCASE
 * @HEX: List of variadic arguments
 * Return: Returns (count) ALWAYS
 */
int print_HEXbase(va_list HEX)
{
	char hexSize[20];
	unsigned int count = 0, n = 0;
	int i = 0;

	n = va_arg(HEX, unsigned int);
	if (n == 0)
	{
		_putchar(0 + '0');
		count++;
	}
	while (n > 0)
	{
		if (n % 16 >= 10 && n % 16 <= 15)
			hexSize[i] = 55 + (n % 16);
		else
			hexSize[i] = 48 + (n % 16);
		n = n / 16;
		i++;
	}
	for (--i; i >= 0; i--)
	{
		_putchar(hexSize[i]);
		count++;
	}
	return (count);
}
/**
 * print_hexStr - Prints a string and returns string length
 * @hexStr: List of variadic arguments
 * Return: Returns (count) ALWAYS
 */
int print_hexStr(va_list hexStr)
{
	unsigned long hexSize[20], n = 0;
	unsigned int count = 0;
	int i = 0;

	n = va_arg(hexStr, unsigned long);
	if (n == 0)
	{
		_putchar('(');
		_putchar('n');
		_putchar('i');
		_putchar('l');
		_putchar(')');
		count += 5;
	}
	else if (n > 0)
	{
		_putchar('0');
		_putchar('x');
		count += 2;
		while (n > 0)
		{
			if (n % 16 >= 10 && n % 16 <= 15)
				hexSize[i] = 87 + (n % 16);
			else
				hexSize[i] = 48 + (n % 16);
			n = n / 16;
			i++;
		}
		for (--i; i >= 0; i--)
		{
			_putchar(hexSize[i]);
			count++;
		}
	}
	return (count);
}
