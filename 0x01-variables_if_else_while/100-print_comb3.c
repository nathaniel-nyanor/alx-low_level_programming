#include <stdio.h>
/**
 * main - main block
 * Description: Print all possible combinations of two digits.
 * Numbers must be separated by commas and a space.
 * 01 and 10 are considered as the same combination of the two digits.
 * Print only the smallest combination of two digits.
 * Numbers should be printed in ascending order, with two digits.
 * You can only use 'puschar'.
 * You can only use 'putchar' up to 5 times.
 * You are not allowed to use any variable of type 'char'.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k;

	i = 0;

	while (i < 100)
	{
		j = i % 10; /* single digits */
		k = i / 10; /* double digits */

		if (k < j)
		{
			putchar(k + '0');
			putchar(j + '0');

			if (i < 89)
			{
				putchar(44);
				putchar(32);
			}
		}

		i++;
	}
	putchar('\n');

	return (0);
}
