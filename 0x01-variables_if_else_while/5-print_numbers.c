#include <stdio.h>

/**
 * main - list all single digit numbers of base 10 starting from zero
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}
	putchar('\n');
	return (0);
}
