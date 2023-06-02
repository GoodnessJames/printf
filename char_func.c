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
	for (i = 0; Pstr[i]; i++)
	{
		_putchar(Pstr[i]);
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
	int count, i, j;
	char *Pstr = va_arg(Str, char *);
	unsigned char n, hex[2];

	Pstr = va_arg(Str, char *);
	if (Pstr == NULL)
		Pstr = "(null)";
	count = 0;
	for (i = 0; Pstr[i] != '\0'; i++)
	{
		if ((Pstr[i] > 0 && Pstr[i] < 32) || (Pstr[i] >= 127))
		{
			count += _putchar('\\');
			count += _putchar('x');
			n = (unsigned char) Pstr[i];
			hex[0] = n / 16;
			hex[1] = n % 16;
			for (j = 0; j < 2; j++)
			{
				if (hex[j] >= 10)
					count += _putchar(hex[j] - 10 + 'A');
				else
					count += _putchar(hex[j] + '0');
			}
		}
		else
			{
				count += _putchar(Pstr[i]);
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
	if (*str == '\0')
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
