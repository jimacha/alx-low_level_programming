#include <stdio.h>

/**
 * main - start
 * Return: Always zero
 */
/*i rep ones j rep tens n rep hundreds*/

int main(void)
{
	int i;
	int j;
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			for (i = '0'; i <= '9'; i++)
			{
				if (!((i == j) || (n == j) || (n > j) || (j > i)))
				{
					putchar(n);
					putchar(j);
					putchar(i);
					if (!(i == '9' && j == '8' && n == '7'))
					{
						putchar(',');
						putchar(' ');
					}

				}
			}
		}
	}
	putchar('\n');
	return (0);
}
