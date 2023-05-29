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
	int modulu_checker = 1
