#include "main.h"

/**
 * specifier_parser - Fetches the specifier passed to the function
 * @format: A pointer to a character string
 * @i: Index specifier
 *
 * Return: Returns (list[index].fPtr), (flags[index].fPtr), or (0).
 */
int(*specifier_parser(const char *format, int i))(va_list)
{
	int index;
	type_checker fmtArray[] = {
		{"c", print_char},
		{"s", print_str},
		{"S", print_Str},
		{"p", print_hexStr},
		{"i", print_int},
		{"d", print_int},
		{"b", print_binary},
		{"u", print_uInt},
		{"o", print_octBase},
		{"x", print_hexBase},
		{"X", print_HEXbase},
		{"r", print_revStr},
		{"R", print_rotString},
		{NULL, NULL}
	};
	type_checker flags[] = {
		{"+d", plusFlag},
		{"+i", plusFlag},
		{" d", spaceFlag},
		{" i", spaceFlag},
		{"#o", octFlag},
		{"#x", hexFlag},
		{"#X", HEXflag},
		{NULL, NULL}
	};
	for (index = 0; fmtArray[index].id; index++)
	{
		if (fmtArray[index].id[0] == format[i])
			return (fmtArray[index].fPtr);
	}
	for (index = 0; flags[index].id; index++)
	{
		if (flags[index].id[0] == format[i] && flags[index].id[1] == format[i + 1])
			return (flags[index].fPtr);
	}
	return (0);
}
