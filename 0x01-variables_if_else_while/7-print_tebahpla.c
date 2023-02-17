#include <stdio.h>

/**
 * main - Prints the lowercase alphabets in reverse form.
 *
 * Return: Always 0.
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);

	putchar('\n');

	return (0);
}
