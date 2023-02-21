#include "main.h"
/**
 * print_alphabet - prints alphabets in lowercase
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
	char myletter;

	for (myletter = 'a'; myletter <= 'z'; myletter++)
	{
		_putchar(myletter);
	}
	_putchar('\n');
}
