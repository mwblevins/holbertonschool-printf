#include "main.h"

/**
 * numprint - function that prints numbers followed by a new line
 */

void numprint(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		charput(n + '0');
	}
		charput('\n');
}
