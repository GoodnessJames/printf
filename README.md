# Project Title: 0x11. C - printf

This is a team project that involves writing a user-defined printf function that performs similar operations to the standard printf function.

## Project Contributors

- [Akoma Goodness James](https://github.com/GoodnessJames)
- [Nna Ginika Elizabeth](https://github.com/Giniks)

## Description of each Task in the Project

### Task 0
In this task, the _printf function produces output according to a format.

- **Function Prototype:** int _printf(const char *format, ...);
- **Return Value:** Upon SUCCESS, the _print function returns the number of characters printed (excluding the null byte used to end output to strings). Upon FAILURE (ie if an output error is encountered), the function returns -1.
- **Conversion Specifiers:** The conversion specifier is usually introduced by the character "%", and this character specifies the type of conversion to be applied. For this task, the function handles the following conversion specifiers:
	- c
	- s
	- %

**Exemptions:** Handling the following is not required for this task:
- Buffer handling of the C library printf function
- Field width
- Precision
- Length modifiers

### Task 1
For this task, the function handles the following conversion specifiers:
- d
- i

**Exemptions:** Handling the following is not required for this task
- Field width
- Precision
- Length modifier

### Task 2
For this task, the function handles the following conversion specifier:
- b: the unsigned int argument is converted to binary

### Task 3
For this task, the function handles the following conversion specifiers:
- u
- o
- x
- X

**Exemptions:** Handling the following is not required for this task
- Flag characters
- Field width
- Precision
- Length modifiers

### Task 4
For this task, the local buffer of 1024 chars is used in order to call write as little as possible.

### Task 5
For this task, the function handles the following custom conversion specifier:
- s: prints the string
- Non printable characters (0 < ASCII value < 32 or >= 127) are printed this way: \x, followed by the ASCII code value in hexadecimal (upper case - always 2 characters)

### Task 6
For this task, the function handles the following conversion specifier: p.

**Exemptions:** Handling the following is not required for this task
- Flag characters
- Field width
- Precision
- Length modifiers

### Task 7
For this task, the function handles the following flag characters for non-custom conversion specifiers: "+", "space", and "#"

### Task 8
For this task, the function handles the following length modifiers for non-custom conversion specifiers:
- l
- h

### Task 9
For this task, the function handles the field width for non-custom conversion specifiers.

### Task 10
For this task, the function handles the precision for non-custom conversion specifiers.

### Task 11
For this task, the function handles the 0 flag character for non-custom conversion specifiers.

### Task 12
For this task, the function handles the "-" flag character for non-custom conversion specifiers.

### Task 13
For this task, the function handles the following custom conversion specifier:
- r : prints the reversed string

### Task 14
For this task, the function handles the following custom conversion specifier:
- R: prints the rot13'ed string

### Task 15
This is the final task of the project where all the tasks are checked to verify that all the above options work well together.
