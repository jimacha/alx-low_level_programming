#include <stdio.h>

/**
 * main -start
 * Return: Always zero
 */

int main(void)
{
	int i;
	int j;

	for (j = 0; j <= 9; j++)
	{
		for (i = 0; i <= 9; i++)
		{
			if (!((i == j) || (i < j)))
			{
				putchar(j);
				putchar(i);
				if (!((i == 9) && (j == 8)))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}


