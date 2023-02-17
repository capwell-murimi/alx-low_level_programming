#include <stdio.h>

/**
 * main - Prints hexadecimals
 *
 * Return: Always 0.
 */
int main(void)
{
	int dig;
	char ch;

	for (dig = 0; dig < 10; dig++)
		putchar((dig % 10) + '0');

	for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);

	putchar('\n');

	return (0);
}
