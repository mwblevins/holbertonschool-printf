#include "main.h"

/**
 * print_number - prints a number
 * @args: List of arguments
 * Return: the number of args
 */
int print_number(va_list args)
{
        int n;
        int di;
        int len;
        unsigned int num;

        n  = va_arg(args, int);
        di = 1;
        len = 0;

        if (n < 0)
        {
                len += charput('-');
                num = n * -1;
        }
        else
                num = n;

        for (; num / di > 9; )
                di *= 10;

        for (; di != 0; )
        {
                len += charput('0' + num / di);
                num %= di;
                di /= 10;
        }

        return (len);
}

