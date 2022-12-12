#include <stdio.h>

/**
 * main - start
 * Return: Always zero
 */
/*i is ones j tens k hund l th*/

int main(void)
{
	int i;
	int j;
	int k;
	int l;

	for (l = '0'; l <= '9'; l++)
	{
		for (k = '0'; k <= '9'; k++)
		{
			for (j = '0'; j <= '9'; j++)
			{
				for (i = '0'; i <= '9'; i++)
				{
					if (!((l && k) == (j && i)))
					{
						putchar(l);
						putchar(k);
						putchar(' ');
						putchar(j);
						putchar(i);
						if (!(((l && k) == '9' && '8') && ((j && i) == '9' && '9')))
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
