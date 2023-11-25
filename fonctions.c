#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "main.h"


/**
 * pc - print character
 * @l: valist
 * Return: 1
*/

int pc(va_list l)
{
	char str;

	str = va_arg(l, int);
	_putchar(str);
	return (1);
}

/**
 * ppercent - print %
 * @l: valist
 * Return: 1
*/

int ppercent(va_list l)
{
	_putchar(37);
	return (1);
	l = l;
}

/**
 * ps - print a string
 * @l: valist
 * Return: length
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
 * p_dec - print decimal
 * @l: valist
 * Return: 1
*/

int p_dec(va_list l)
{
int n = va_arg(l, int);
int digit;
int temp;
int num = n;
int mag = 1;
int i = 0;
if (n < 0)
{
_putchar('-');
num = -num;
i++;
}
if (num == )
{
_putchar('0');
return (1);
}
temp = num;
while (temp / 10 != 0)
{
mag *= 10;
temp /= 10;
}
do {
digit = num / mag;
_putchar(digit + '0');
num -= digit *mag;
mag /= 10;
i++;
}
while (mag > 0);
return (i);
}

/**
 * p_int - print integer
 * @l: valist
 * Return: number of digits
*/

int p_int(va_list l)
{
int n = va_arg(l, int);
int digit;
int temp;
int num = n;
int mag = 1;
int i = 0;
if (n < 0) 
{
_putchar('-');
num = -num;
i++;
}
if (num == 0) 
{
_putchar('0');
return (1);
}
temp = num;
while (temp / 10 != 0) 
{
mag *= 10;
temp /= 10;
}
do {
digit = num / mag;
_putchar(digit + '0');
num -= digit * mag;
mag /= 10;
i++;
}
while (mag > 0);
return (i);
}
