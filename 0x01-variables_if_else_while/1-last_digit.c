#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Return: Always (zero)
 */
int main(void)

{

		int n, Ldgt;



			srand(time(0));

				n = rand() - RAND_MAX / 2;
				Ldgt = n % 10;
				if (Ldgt > 5)
					printf("Last digit of %d is %d and is greater than 5\n", n, Ldgt);
				else if (Ldgt == 0)
					printf("Last digit of %d is %d and is 0\n", n, Ldgt);
				else
					printf("Last digit of %d is %d and is less than 6 and not 0\n", n, Ldgt);
				return (0);
}
