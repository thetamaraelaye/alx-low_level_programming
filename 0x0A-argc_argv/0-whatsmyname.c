#include <stdio.h>
/**
 * main - prints its name, followed by a new line.
 * @argc: number of command line ariguments
 * @argv: array containing the program line arg
 * Return: 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv)
{
	printf("%s\n", argv[0]);
	return (0);
}
