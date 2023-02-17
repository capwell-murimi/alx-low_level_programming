#include <stdio.h>

/**
 * main - shows all possible combinations of single-digit numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
	int dig;

	for (dig = 0; dig <= 9; dig++)
	{
		putchar((dig % 10) + '0');
		if (dig == 9)
			continue;
		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
