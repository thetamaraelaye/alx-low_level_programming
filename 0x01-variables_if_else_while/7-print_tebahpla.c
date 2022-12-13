#include <stdio.h>

/**
 * main - Program prints alphabets in reverse
 *
 * Return: 0 (SUccess)
 */
int main(void)
{
	int i;

	for (i = 122; i > 96; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
