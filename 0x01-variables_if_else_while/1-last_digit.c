#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - execution starts here
 */
int main(void)
{
		int n;
		int l;
			srand(time(0));
				n = rand() - RAND_MAX / 2;
				l = n % 10;

				if (n > 5)
				{
				printf("Last digit of %d is %d and is greater than 5\n", n, l);
				}
				else if (n == 0)
				{
				printf("Last digit of %d is 0\n", n);
				}
				else if (n <= 6)
				{
				printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l);
				}
					return (0);
}
