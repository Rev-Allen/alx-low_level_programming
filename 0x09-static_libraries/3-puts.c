#include "main.h"
#include <stdio.h>

/**
 * _puts - Entry point
 * @str: The string to be printed
 * _putchar prints a new line
 */
void _puts(char *str)

{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
