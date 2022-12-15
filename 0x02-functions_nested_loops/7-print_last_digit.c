#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @n: the number
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int in = n % 10;

	if (in < 0)
		in *= -1;

	_putchar(in + '0');

	return (0);
}
