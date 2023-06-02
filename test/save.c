
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
	if (*Pstr == '\0')
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
