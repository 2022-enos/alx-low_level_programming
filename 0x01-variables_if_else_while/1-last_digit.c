#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;
	int B;
	char str[] = "Last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	B = n % 10;

	if (B > 5)
		printf("%s %d is %d and is greater than 5\n", str, n, B);
	else if (B == 0)
		printf("%s %d is %d and is 0\n", str, n, B);
	else if (B < 5)
		printf("%s %d is %d and is less than 6 and not 0\n", str, n, B);

	return (0);
}
