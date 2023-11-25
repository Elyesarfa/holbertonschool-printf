#include <stdio.h>
#include <string.h>
#include "main.h"


/**
 * 
*/

int pc(va_list l)
{
	char str;
	str = va_arg(l, int);
	_putchar(str);
	return (1);
}

/**
 * 
*/

int ppercent(void)
{
	_putchar(37);
	return (1);
}

/**
 * 
*/

int ps(va_list l)
{
	char *str;
	int i;
	int length;
	str = va_arg(l, char *);
	if (str == NULL)
	{
		str = "(null)";
		length = _strlen(str);
		for (i = 0; i < length; i++)
		_putchar(str[i]);
	return (length);
	}
	else
	{
		length = _strlen(str);
		for (i = 0; i < length; i++)
		_putchar(str[i]);
	return (length);	
	}
}

/**
 *
*/

int p_dec(va_list l)
{
int n = va_arg(l, int);
int num, last = n % 10, digit, exp = 1;
int i = 1;
n = n / 10;
num = n;
if (last < 0)
{
	_putchar('-');
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
		_putchar(digit + '0');
		num = num - (digit * exp);
		exp = exp / 10;
		i++;
	}
}
_putchar(last + '0');
return (1);
}

/**
 *
*/

int p_int(va_list l)
{
int n = va_arg(l, int);
int num, last = n % 10, digit, exp = 1;
int i = 1;
n = n / 10;
num = n;
if (last < 0)
{
	_putchar('-');
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
		_putchar(digit + '0');
		num = num - (digit * exp);
		exp = exp / 10;
		i++;
	}
}
_putchar(last + '0');
return (i);
}

