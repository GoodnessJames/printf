#include "main.h"

/**
 * binary_converter - Converts an unsigned integer into a binary number
 * @val: A list of varaiadic arguments
 *
 * Return: On SUCCESS, returns (output_index). On FAILURE, returns (-1)
 */
int binary_converter(va_list val)
{
	int temp_count;
	char c;
	int output_index = 0;
	unsigned int num = va_arg(val, unsigned int);
	char *buffer;

	int bufferSize = BUFFER_SIZE;

	buffer = (char *)malloc((bufferSize + 1) * sizeof(char));
	while (num > 0)
	{
		if (output_index == bufferSize)
		{
			bufferSize += BUFFER_SIZE;
			buffer = (char *)realloc(buffer, bufferSize * sizeof(char));
			if (buffer == NULL)
			{
				free(buffer);
				return (-1);
			}
		}

		c = 48 + (num % 2);
		buffer[output_index] = c;
		num /= 2;
		output_index++;
	}

	buffer = (char *)realloc(buffer, (output_index + 1) * sizeof(char));
	if (buffer == NULL)
	{
		free(buffer);
		return (-1);
	}

	temp_count = output_index - 1;

	buffer[output_index] = '\0';

	while (temp_count >= 0 && buffer[temp_count] != '\0')
	{
		_putchar(buffer[temp_count]);
		temp_count--;
	}
	free(buffer);
	return (output_index);
}
