#ifndef PRINTSTUFF_H
#define PRINTSTUFF_H
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>
#include <stdarg.h>
/**
 * struct convert - defines a strcuture for fucntions and symbols
 *
 * @sym: Operator
 * @f: function
 */
struct convert
{
	char *sym;
	int (*f)(va_list);
};
typedef struct convert conver_t;

int print_char(va_list);
int print_string(va_list);
int print_percent(va_list);
int parser(const char *format, conver_t f_list[], va_list arg_list);
int _printf(const char *format, ...);
int charput(char c);

unsigned int base_len(unsigned int, int);
char *rev_string(char *);
void write_base(char *str);
char *_memcpy(char *dest, char *src, unsigned int n);
int print_number(va_list args);


#endif
