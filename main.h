#ifndef MAIN_H
#define MAIN_H

/*
 * File: main.h
 * Desc: This file contains all prototypes & struct required for the project
 */

/* Standard C Library Headers */
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct checker - A new type struct defining a struct called type_checker
 * @id: A pointer to the format specifier
 * @fPtr: Function pointer
 */
typedef struct checker
{
	char *id;
	int (*fPtr)(va_list);
} type_checker;

/* Function Prototypes */
int _putchar(char c);
int _printf(const char *format, ...);
int(*specifier_parser(const char *format, int i))(va_list);
int print_specialFormat(const char *format, int i);

/* Function Prototypes in File: char_func.c */
int print_char(va_list chars);
int print_str(va_list str);
int print_Str(va_list Str);
int print_revStr(va_list revStr);
int print_rotString(va_list rotString);
/* Function Prototypes in File: int_func.c */
int print_percent(__attribute__((unused)) va_list args);
int print_int(va_list nums);
int print_binary(va_list bi);
/* Function Prototypes in File: base_func.c */
int print_uInt(va_list);
int print_octBase(va_list);
int print_hexBase(va_list);
int print_HEXbase(va_list);
int print_hexStr(va_list);
/* Flag Prototypes */
int plusFlag(va_list);
int spaceFlag(va_list);
int octFlag(va_list);
int hexFlag(va_list);
int HEXflag(va_list);

#endif
