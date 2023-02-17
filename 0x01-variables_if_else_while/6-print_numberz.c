#include <stdio.h>

/**
 * main -  putchar without using the variables of char to print numbers 0 - 9.
 *
 * Return: Always 0.
 */
int main(void)
{
	int dig;

	for (dig = 0; dig < 10; dig++)
		putchar((dig % 10) + '0');

	putchar('\n');

	return (0);
}
