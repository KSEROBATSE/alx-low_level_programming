#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* last digit c */

/* betty style doc for function main goes here */
/**
 * main - prints the last digit of a randomly generated number and wether it is greater than 5, less than 6, or 0.
 *
 * Return: Always 0(success)
 */
int main(void)
{
	int n;

	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code*/
	m = n % 10;
	if (m > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, m);
	if (m == 0)
		printf("last digit of %d is %d and is 0\n", n, m);
	if (m < 6 && m != 0)
		printf("Last digit of %d and is %d less than 6 and not 0\n", m);
	return (0);
}
