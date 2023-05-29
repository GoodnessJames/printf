/*
 * File: main.h
 * Desc: This file contains all prototypes & struct required for the project
 */

#ifndef MAIN_H
#define MAIN_H

/* Standard C Library Headers */
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/* Buffer Size Definition used during memory allocation (malloc) */
#define BUFFER_SIZE 10

/**
 * struct convert - A new type defining a struct called type_checker
 * @id: A pointer to the format specifier
 * @fPtr: A function pointer to the matching function
 */
typedef struct convert
{
	char *id;
	int (*fPtr)(va_list);
} type_checker;

/* Function Prototypes */
int _putchar(char c);
int _printf(const char *format, ...);
void _vprintf(const char *format, va_list args);
int format_parser(const char *format, va_list args);
int char_printer(va_list);
int string_printer(va_list args);
int percent_printer(va_list);
int unsignedInt_printer(unsigned int n);
int num_printer(va_list);
int num_printer(va_list);
int binary_converter(va_list val);

#endif
