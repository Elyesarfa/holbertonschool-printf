# our own printf
# IO
| Format specifier            | Output                                                               |
| ----------------- | ----------------- |
| %c | Character |
| %s | String |
| %d | Decimal |
| %i | integer |

# Functions

| File Name             | Description                                               |
|-----------------------|-----------------------------------------------------------|
| myprintf.c        | Main implementation of the _printf function. Processes the format string and generates output based on supported conversion specifiers such as %c, %s, %i, and %d. Provides basic formatting options. Does not include advanced features like flag characters or precision.  |
| main.h              | Header file containing function prototypes. |
| format_specifier.c         | Implementation of a function that selects the appropriate handler for each conversion specifier. |
| fonctions.c        | Contains functions for operators. |
| _putchar.c          | Implementation of the _putchar function responsible for writing a character to the standard output. |
| README.md           | Documentation file providing an overview of the project

# Prototype 
int _printf(const char *format, ...);

# Compilation
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c

# Flowchart
![testing drawio](https://github.com/elyessassi/holbertonschool-printf/assets/146719704/3f3eef4a-aac6-45bb-a9c3-14085c65a64a)
