#include <stdio.h>
#include <math.h>

/**
 * print_last_digit - prints the last digit
 * @n: the number
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int num, last, count;

	printf("Enter an integer number\n");
	scanf("%d", &num);

	count = log10(num);

	last = num % 10;
	printf("last = %d\n", last);

	return (0);
}
