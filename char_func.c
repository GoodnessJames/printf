#include "main.h"

/**
 * print_char - Prints a character to the console
 * @chars: List of variadic arguments
 *
 * Return: Returns (1) ALWAYS
 */
int print_char(va_list chars)
{
	char c = (char)va_arg(chars, int);

	_putchar(c);
	return (1);
}
/**
 * print_str - Prints a string to the console
 * @str: List of variadic arguments
 *
 * Return: Returns (count) ALWAYS
 */
int print_str(va_list str)
{
	char *Pstr;
	int i = 0;

	Pstr = va_arg(str, char *);
	if (Pstr == NULL)
	{
		Pstr = "(null)";
	}
	while (Pstr[i])
	{
		_putchar(Pstr[i]);
		i++;
	}
	return (i);
}
/**
 * print_Str - Prints a string and returns the string length
 * @Str: List of variadic arguments
 *
 * Return: Returns (count) ALWAYS
 */
int print_Str(va_list Str)
{
	char *Pstr, hexSize[10];
	int i = 0, n = 0, j = 0;
	unsigned int count = 0;

	Pstr = va_arg(Str, char *);
	if (Pstr == NULL)
		Pstr = "(null)";
	for (i = 0; Pstr[i]; i++)
	{
		j = 0;
		if ((Pstr[i] > 0 && Pstr[i] < 32) || (Pstr[i] >= 127))
		{
			_putchar('\\');
			_putchar('x');
			n = Pstr[i];
			if (n <= 15)
				_putchar('0');
			while (n > 0)
			{
				if (n % 16 >= 10 && n % 16 <= 15)
					hexSize[j] = 55 + (n % 16);
				else
					hexSize[j] = 48 + (n % 16);
				n = n / 16;
				j++;
			}
			for (--j; j >= 0; j--)
				_putchar(hexSize[j]);
			count += 4;
		}
		else
		{
			_putchar(Pstr[i]);
			count++;
		}
	}
	return (count);
}

/**
 * print_rotString - prints the rot13'ed string
 * @rot: List of variadic arguments
 * Return: Returns (count) ALWAYS
 */
int print_rotString(va_list rot)
{
	char *str = va_arg(rot, char *);
	int i, j, count = 0;
	char letters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rotSet[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		j = 0;
		while ((letters[j] != '\0') && (str[i] != letters[j]))
		{
			j++;
		}
		if (str[i] == letters[j])
		{
			_putchar(rotSet[j]);
			count++;
		}
		else if (letters[j] == '\0')
		{
			_putchar(str[i]);
			count++;
		}
	}
	return (count);
}

/**
 * print_revStr - Prints a string in reverse and returns the string length
 * @revStr: List of variadic arguments
 *
 * Return: Returns (count) ALWAYS
 */
int print_revStr(va_list revStr)
{
	char *str;
	int i = 0, count = 0;

	str = va_arg(revStr, char *);
	if (str == NULL)
	{
		str = ")llun(";
	}
	for (i = 0; str[i]; i++)
	{
		;
	}
	i--;
	for (; i >= 0; i--)
	{
		_putchar(str[i]);
		count++;
	}
	return (count);
}
