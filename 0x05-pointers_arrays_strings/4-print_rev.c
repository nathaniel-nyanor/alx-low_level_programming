#include "main.h"

/**
 * print_rev - function that  prints a string, in reverse,
 * followed by a new line
 * @s: the string to reverse
 */

void print_rev(char *s)
{
	int length = 0;
	int i;

	/*
	 * Iterating to find the length of the string and to
	 * point to the last character
	 */
	while (*s != '\0')
	{
		length++;
		++s;
	}

	s--; /* going back to character before the  null character */

	/* print reversed string */
	for (i = length; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
