#include <stdio.h>
#include <string.h>
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
 * Return: 1
*/

int ppercent(void)
{
	_putchar(37);
	return (1);
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
int num = n;
int mag = 1;
int i = 0;
if (n < 0)
{
	_putchar('-');
	num = -num;
	i++;
}
	while (num / 10 != 0)
	{
		mag *= 10;
		num /= 10;
	}
	num = n;
	while (mag > 0)
	{
		digit = num / mag;
		_putchar(digit + '0');
		num -= digit * mag;
		mag /= 10;
		i++;
	}
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
int num = n;
int mag = 1;
int i = 0;
if (n < 0)
{
	_putchar('-');
	num = -num;
	i++;
}
	while (num / 10 != 0)
	{
		mag *= 10;
		num /= 10;
	}
	num = n;
	while (mag > 0)
	{
		digit = num / mag;
		_putchar(digit + '0');
		num -= digit * mag;
		mag /= 10;
		i++;
	}
return (i);
}

