#include "main.h"

/**
 * _puts - function that prints a string, with new line, to stdout
 * @str: input variable
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\n' && str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('`\n');
}
