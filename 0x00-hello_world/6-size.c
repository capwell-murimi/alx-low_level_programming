#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int one;
	long int two;
	long long int thre;
	char four;
	float five;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(four));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(one));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(two));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(thre));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(five));
	return (0);
}
