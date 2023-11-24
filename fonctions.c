#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * 
*/

void pc(va_list l)
{
	char str;
	str = va_arg(l, int);
	putchar(str);
}

/**
 * 
*/

void ppercent(va_list l)
{
	putchar(64);
	l = l;
}

/**
 * 
*/

void ps(va_list l)
{
	int i = 0;
	char *str = va_arg(l, char *);
	while(str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}
}

/**
 * 
*/

void errormsg()
{
	putchar('e');
	putchar('r');
	putchar('r');
	putchar('o');
	putchar('r');
}

/**
 *
*/

void p_dec(va_list l)
{
int n = va_arg(l, int);
int num, last = n % 10, digit, exp = 1;
int i = 1;
n = n / 10;
num = n;
if (last < 0)
{
	putchar('-');
	num = -num;
	n = -n;
	last = -last;
	i++;
}
if (num < 0)
{
	while (num / 10 != 0)
	{
		exp = exp * 10;
		num = num / 10;
	}
	num = n;
	while (exp > 0)
	{
		digit = num / exp;
		putchar(digit + '0');
		num = num - (digit * exp);
		exp = exp / 10;
		i++;
	}
}
putchar(last + '0');
}

/**
 *
*/

void p_int(va_list l)
{
int n = va_arg(l, int);
int num, last = n % 10, digit, exp = 1;
int i = 1;
n = n / 10;
num = n;
if (last < 0)
{
	putchar('-');
	num = -num;
	n = -n;
	last = -last;
	i++;
}
if (num < 0)
{
	while (num / 10 != 0)
	{
		exp = exp * 10;
		num = num / 10;
	}
	num = n;
	while (exp > 0)
	{
		digit = num / exp;
		putchar(digit + '0');
		num = num - (digit * exp);
		exp = exp / 10;
		i++;
	}
}
putchar(last + '0');
}