#include "printstuff.h"

/**
 * strput - function that prints a string, with new line, to stdout
 * @str: input variable
 */

void strput(char *str)
{
	int i = 0;

	while (str[i] != '\n' && str[i] != '\0')
	{
		charput(str[i]);
		i++;
	}
	charput('`\n');
}
