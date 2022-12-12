#include <stdio.h>

/**
 * main - start
 * Return: Always zero
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar(i % 10);
			if (i < 9)
			putchar(',');
		putchar(' ');
	putchar('\n');
	return (0);
}
