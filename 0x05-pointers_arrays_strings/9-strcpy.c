#include <stdio.h>
#include "main.h"

/**
 * _strcpy - update value in buffer.
 * @dest: value to be evaluated.
 * @src: value to be evaluated.
 * Return: not.
 */

char *_strcpy(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (*(src + a) != '\0')
	{
		a++;
	}
	for ( ; b < a ; b++)
	{
		dest[b] = src[b];
	}
	dest[a] = '\0';
	return (dest);
}
