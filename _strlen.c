#include "main.h"
#include <stddef.h>

/**
 *_strlen - count the number of character in a string
 *@s: string
 *Return: number of characters in the string
*/

size_t _strlen(const char *s)
{
	size_t len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
