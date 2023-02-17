#include <stdio.h>
/**
 * main - this program prints numbers from 0 to 9
 *
 * Return: Always 0.
 */
int main(void)
{
	int dig;

	for (dig = 0; dig < 10; dig++)
		printf("%d", dig);

	printf("\n");

	return (0);
}
