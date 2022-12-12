#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Return: Always (zero)
 */
int main(void)

{

		int n;
	        int LastNum;



			srand(time(0));

				n = rand() - RAND_MAX / 2;
				LastNum = n % 10;
				printf("Last digit of", n);
				if (LastNum > 5)
					printf(" %d is %d and is greater than 5\n", n, LastNum);
				else if (LastNum == 0)
					printf(" %d is %d and is 0\n", n, LastNum);
				else
					printf(" %d is %d and is less than 6 and not 0\n", n, LastNum);
				return (0);
}
